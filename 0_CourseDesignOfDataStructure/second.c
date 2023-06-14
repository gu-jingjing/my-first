#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



//7-5 抢红包
// 输入格式：
// 输入第一行给出一个正整数N（≤10^4),
// 即参与发红包和抢红包的总人数，则这些人从1到N编号。
// 随后N行，第i行给出编号为i的人发红包的记录，格式如下：
// K  N1  P1  ... Nk  Pk
// 其中K（0≤K≤20）是发出去的红包个数，
// Ni是抢到红包的人的编号，
// Pi（ > 0）是其抢到的红包金额（以分为单位）。
// 注意：对于同一个人发出的红包，每人最多只能抢1次，不能重复抢。
// 输出格式：
// 按照收入金额从高到低的递减顺序输出每个人的编号和收入金额
// （以元为单位，输出小数点后2位）。
// 每个人的信息占一行，两数字间有1个空格。
// 如果收入金额有并列，则按抢到红包的个数递减输出；
// 如果还有并列，则按个人编号递增输出。
// 
// 
//记录每个人的编号和钱数以及抢到红包个数
typedef struct Person
{
	int num;//编号
	int money;
	int sum;//记录抢到红包个数
}Person;

typedef struct Person SLDataType;

//动态顺序表
typedef struct SeqList
{
	SLDataType* a;
	int size;  //表示数组中存储的数据多少个
	int capacity;  //表示数组实际能存数据的空间容量是多大
}SL;


//扩容
void SeqListCheckCapacity(SL* ps)
{
	//如果没有空间或者空间不足，就扩容
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc failed.\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}

//初始化
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

//销毁
void SeqListDestroy(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

//尾插
void SeqListPushBack(SL* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}

//交换两个元素
void Swap(SLDataType* p, SLDataType* q)
{
	SLDataType tmp = *p;
	*p = *q;
	*q = tmp;
}

//单趟循环
int Partion(SLDataType* a, int left, int right)
{
	//快排单趟循环，使得关键字左边的数字都小于它，关键字右边的数字都大于它
	int keyi = left;
	while (left < right)
	{
		while (left < right && a[right].money <= a[keyi].money)
		{
			right--;
		}
		while (left < right && a[left].money >= a[keyi].money)
		{
			left++;
		}
		Swap(&(a[left]), &(a[right]));
	}
	Swap(&(a[keyi]), &(a[left]));
	return left;
}

//快速排序
void QuickSort(SLDataType* a, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int keyi = Partion(a, left, right);
	QuickSort(a, left, keyi - 1);
	QuickSort(a, keyi + 1, right);
}

//对于金额相同时的重新排序（按照抢到红包数，若红包数相同，则按照编号）
void Sort(SLDataType* a, int left, int right)
{
	while (left < right)
	{
		int i = left;
		if (a[i].money == a[i + 1].money)
		{
			if (a[i].sum < a[i + 1].sum)
			{
				Swap(&a[i], &a[i + 1]);
			}
			else if (a[i].sum == a[i + 1].sum)
			{
				if (a[i].num > a[i + 1].num)
				{
					Swap(&a[i], &a[i + 1]);
				}
			}
		}
		i++;
		left = i;
	}
}

//打印
void PrintArray(SLDataType* a, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		float money = (float)a[i].money / 100;
		printf("%d %.2f\n", a[i].num, money);
	}
}
//
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//
//	SL sl;
//	SeqListInit(&sl);
//	//初始化这N个人的拥有金额为0
//	for (int i = 0; i < N; i++)
//	{
//		Person ps;
//		ps.money = 0;
//		ps.num = i + 1;
//		SeqListPushBack(&sl, ps);
//	}
//
//	int n = N;
//	int pay = 0;//pay表示发红包的编号的下标
//	while (n)
//	{
//		//K表示一个人发的红包数量
//		int K = 0;
//		scanf("%d", &K);
//		while (K)
//		{
//			//person代表抢到红包的编号
//			int person = 0;
//			scanf("%d", &person);
//			//person-1即是该编号存储于顺序表中的下标
//			sl.a[person - 1].sum++;//该编号抢到的红包数量加一
//			//money表示抢到的钱数
//			int money = 0;
//			scanf("%d", &money);
//			sl.a[person-1].money += money;
//			sl.a[pay].money -= money;
//
//			K--;
//		}
//		pay++;
//		n--;
//	}
//
//	//进行排序
//	QuickSort(sl.a, 0, N - 1);
//	Sort(sl.a, 0, N - 1);
//	//打印
//	PrintArray(sl.a, N);
//
//	SeqListDestroy(&sl);
//	return 0;
//}
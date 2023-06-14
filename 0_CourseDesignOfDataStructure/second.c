#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



//7-5 �����
// �����ʽ��
// �����һ�и���һ��������N����10^4),
// �����뷢������������������������Щ�˴�1��N��š�
// ���N�У���i�и������Ϊi���˷�����ļ�¼����ʽ���£�
// K  N1  P1  ... Nk  Pk
// ����K��0��K��20���Ƿ���ȥ�ĺ��������
// Ni������������˵ı�ţ�
// Pi�� > 0�����������ĺ�����Է�Ϊ��λ����
// ע�⣺����ͬһ���˷����ĺ����ÿ�����ֻ����1�Σ������ظ�����
// �����ʽ��
// ����������Ӹߵ��͵ĵݼ�˳�����ÿ���˵ı�ź�������
// ����ԪΪ��λ�����С�����2λ����
// ÿ���˵���Ϣռһ�У������ּ���1���ո�
// ����������в��У�����������ĸ����ݼ������
// ������в��У��򰴸��˱�ŵ��������
// 
// 
//��¼ÿ���˵ı�ź�Ǯ���Լ������������
typedef struct Person
{
	int num;//���
	int money;
	int sum;//��¼�����������
}Person;

typedef struct Person SLDataType;

//��̬˳���
typedef struct SeqList
{
	SLDataType* a;
	int size;  //��ʾ�����д洢�����ݶ��ٸ�
	int capacity;  //��ʾ����ʵ���ܴ����ݵĿռ������Ƕ��
}SL;


//����
void SeqListCheckCapacity(SL* ps)
{
	//���û�пռ���߿ռ䲻�㣬������
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

//��ʼ��
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

//����
void SeqListDestroy(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

//β��
void SeqListPushBack(SL* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}

//��������Ԫ��
void Swap(SLDataType* p, SLDataType* q)
{
	SLDataType tmp = *p;
	*p = *q;
	*q = tmp;
}

//����ѭ��
int Partion(SLDataType* a, int left, int right)
{
	//���ŵ���ѭ����ʹ�ùؼ�����ߵ����ֶ�С�������ؼ����ұߵ����ֶ�������
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

//��������
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

//���ڽ����ͬʱ���������򣨰�����������������������ͬ�����ձ�ţ�
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

//��ӡ
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
//	//��ʼ����N���˵�ӵ�н��Ϊ0
//	for (int i = 0; i < N; i++)
//	{
//		Person ps;
//		ps.money = 0;
//		ps.num = i + 1;
//		SeqListPushBack(&sl, ps);
//	}
//
//	int n = N;
//	int pay = 0;//pay��ʾ������ı�ŵ��±�
//	while (n)
//	{
//		//K��ʾһ���˷��ĺ������
//		int K = 0;
//		scanf("%d", &K);
//		while (K)
//		{
//			//person������������ı��
//			int person = 0;
//			scanf("%d", &person);
//			//person-1���Ǹñ�Ŵ洢��˳����е��±�
//			sl.a[person - 1].sum++;//�ñ�������ĺ��������һ
//			//money��ʾ������Ǯ��
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
//	//��������
//	QuickSort(sl.a, 0, N - 1);
//	Sort(sl.a, 0, N - 1);
//	//��ӡ
//	PrintArray(sl.a, N);
//
//	SeqListDestroy(&sl);
//	return 0;
//}
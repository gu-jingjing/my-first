#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��֤��Ƴ�˹���������κ�һ������m������������д��m����������֮�͡�
//
//���磺
//
//1 ^ 3 = 1
//
//2 ^ 3 = 3 + 5
//
//3 ^ 3 = 7 + 9 + 11
//
//4 ^ 3 = 13 + 15 + 17 + 19
//
//����һ��������m��m��100������m������д��m����������֮�͵���ʽ�����
//���ݷ�Χ��1\le m\le 100\1��m��100
//���ף�ʱ�临�Ӷȣ�O(m)\O(m) ���ռ临�Ӷȣ�O(1)\O(1)
//
//����������
//����һ��int����
//
//���������
//����ֽ���string

//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int sum = 0;
//    int beg = 1;
//    //����m�ֽ�����зֽ�����ֵĸ���
//    for (i = 1; i <= n; i++)
//    {
//        sum += i;
//    }
//    //����m�ֽ�ģ���һ������
//    for (i = 0; i < sum - n; i++)
//    {
//        beg += 2;
//    }
//
//    for (i = 0; i < n - 1; i++)
//    {
//        printf("%d+", beg);
//        beg += 2;
//    }
//    printf("%d", beg);
//    return 0;
//}

//����
//�Ȳ����� 2��5��8��11��14��������
//���� 2 ��ʼ�� 3 Ϊ����ĵȲ����У�
//�����Ȳ�����ǰn���
//
//
//���ݷ�Χ�� 1 \le n \le 1000 \1��n��1000
//����������
//����һ��������n��
//
//���������
//���һ����Ӻ��������
//
//ʾ��1
//���룺
//2
//����
//�����
//7
//����
//˵����
//2 + 5 = 7
//ʾ��2
//���룺
//275
//����
//�����
//113575
//����
//˵����
//2 + 5 + ... + 821 + 824 = 113575


//int Num(int n)
//{
//    int i = 0;
//    int num = 2;
//    for (i = 0; i < n - 1; i++)
//    {
//        num += 3;
//    }
//    return  num;
//}
//int main() {
//    int i = 0;
//
//    int sum = 0;
//    int n = 0;
//    scanf("%d", &n);
//
//    for (i = 1; i <= n; i++)
//    {
//        sum += Num(i);
//    }
//    printf("%d", sum);
//    return 0;
//}

//����
//��������Ҫ�������������n��Ȼ������n�����������Ϊn�������и����ĸ�������������������ƽ��ֵ���������һλС����
//0��������������Ҳ���Ǹ�������������㡣���û����������ƽ��ֵΪ0��
//
//���ݷ�Χ�� 1 \le n\ \le 2000 \1��n ��2000  ����������������� | val | \le 1000 \�Oval�O��1000
//����������
//��������һ��������n��
//Ȼ������n��������
//
//���������
//��������ĸ�������������������ƽ��ֵ��

//int main() {
//    int n = 0;
//    int count = 0;
//    int ucount = 0;
//    float sum = 0;
//    float ret = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int num = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &num);
//        if (num < 0)
//        {
//            count++;
//        }
//        if (num > 0)
//        {
//            sum += num;
//            ucount++;
//        }
//    }
//    if (ucount == 0)
//    {
//        ret = 0;
//    }
//    else {
//        ret = sum / ucount;
//    }
//    printf("%d %.1f", count, ret);
//    return 0;
//}

//쳲���������


int Fb(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	if (n < 3)
	{
		return c;
	}
	else if (n == 3)
	{
		return a + b;
	}
	else if(n>3)
	{
		int i = 0;
		for (i = 0; i < n-3; i++)
		{
				int temp = a + b;
				a = b;
				b = temp;
				c = a + b;
		}
	}
	return c;
}

int Fei(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	if (n < 3)
	{
		return c;
	}
	else
	{
		int temp = a + b;
		a = b;
		b = temp;
		c = a + b;
		n--;
	}
	return  Fei(n) + Fei(n - 1);
}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fei(n);
//	printf("%d", ret);
//
//	return 0;
//}



//�ݹ�ʵ��n��k�η�
int Pow(int n, int k)
{
	int i = 0;
	int ret = 1;
	for (i = 0; i < k; i++)
	{
		ret *= n;
	}
	return ret;
}

//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d", &n);
//	scanf("%d", &k);
//	int ret = Pow(n, k);
//	printf("%d", ret);
//
//	return 0;
//}

//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�

int Sum(int n)
{
	int s;
	int ret = 0;
	if (n > 9)
	{
		s = n / 10;
		ret = n % 10;
	}
	else
		return n;

	return Sum(s) + ret;

}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Sum(n);
//	printf("%d", ret);
//
//	return 0;
//}

//�ַ������򣨵ݹ�ʵ�֣�

void Back(char* arr,int left,int right)
{
	if (left < right)
	{
		char temp = 0;
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
	else
		return;
	return Back(arr , left,right);

}

//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	Back(arr,0,sz-1);
//	
//	printf("%s", arr);
//
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen

int Strlen(const char* arr)
{
	if (*arr != '\0')
	{
		return Strlen(arr + 1) + 1;
	}
	else
		return 0;
}

int my_strlen(const char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr += 1;
	}
	return count;
}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", Strlen(arr));
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

int Fac(int n)
{
	if (n > 0)
	{
		return Fac(n - 1) * n;
	}
	else
		return 1;
}

int Fact(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", Fac(n));
//	printf("%d\n", Fact(n));
//	return 0;
//}
//
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

void Print(int n)
{
	
	if (n > 9)
	{
		int ret = n / 10;
		Print(ret);
	}
	int k = n % 10;
	printf("%d ", k);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	Print(n);

	return 0;
}
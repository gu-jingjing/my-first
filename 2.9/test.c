#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i + 8;
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr1[13] = "*************";
//	char arr2[13] = "             ";
//	int i = 0;
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int begin = (left + right) / 2 + 1;
//	int end = begin;
//	for (i = 0; i < (left + right) / 2 + 1; i++)
//	{
//		if (begin >= left)
//		{
//			*(arr2 + begin) = *(arr1 + begin);
//			begin--;
//		}
//		if (end <= right)
//		{
//			*(arr2 + end) = *(arr1 + end);
//			end++;
//		}
//		
//		for (int j = 0; j <= right; j++)
//		{
//			printf("%c", arr2[j]);
//		}
//		printf("\n");
//	}
//	begin++;
//	end--;
//	for (i = 0; i < (left + right) / 2; i++)
//	{
//		if (begin < (left + right) / 2 + 1)
//		{
//			*(arr2 + begin) = ' ';
//			begin++;
//		}
//		if (end > (left + right) / 2 + 1)
//		{
//			*(arr2 + end) = ' ';
//			end--;
//		}
//		for (int j = 0; j <= right; j++)
//		{
//			printf("%c", arr2[j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���
//������ : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#include<math.h>
//void is_narcissistic_number(int n)
//{
//	int cpy = n;
//	int count = 1;
//	while (cpy > 9)
//	{
//		count++;
//		cpy /= 10;
//	}
//	cpy = n;
//	int sum = 0;
//	sum += pow(n % 10, count);
//
//	while (n > 9)
//	{
//		n /= 10;
//		sum += pow(n % 10, count);
//	}
//
//	if (sum == cpy)
//	{
//		printf("%d ", cpy);
//	}
//}
//
//int main()
//{
//	int i = 0; 
//	for (i = 0; i < 100000; i++)
//	{
//		is_narcissistic_number(i);
//	}
//
//	return 0;
//}
//
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

int Sn(int a)
{
	int sum = 0;
	int i = 0;
	int tmp = a;
	for (i = 0; i < 5; i++)
	{
		sum += tmp;
		tmp *= 10;
		tmp += a;
	}
	return sum;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int ans = Sn(a);
	printf("%d", ans);

	return 0;
}
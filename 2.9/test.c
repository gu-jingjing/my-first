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
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数
//本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
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
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

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
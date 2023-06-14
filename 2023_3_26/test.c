#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

//找单身狗
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
int* FindSingleNum(int* arr, int sz)
{
	int i = 0;
	int j = 0;
	int tmp[100] = { 0 };
	int k = 0;

	for (i = 0; i < sz; i++)
	{
		for (j = i+1; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				tmp[k] = arr[i];
				k++;
			}
		}
	}

	k = 0;
	int ret[2] = { 0 };
	for (i = 0; i < sz; i++)
	{
		int flag = 1;
		for (j = 0; j < sz - 2; j++)
		{
			if (tmp[j] == arr[i])
			{
				flag = 0;
			}
		}
		if (flag)
		{
			ret[k] = arr[i];
			k++;
		}
	}

	return ret;
}

//int main()
//{
//	int arr[10] = { 1,1,2,3,3,4,5,5,6,6 };
//	int arr2[14] = { 1,3,4,5,11,6,7,4,2,1,2,3,6,5 };
//
//	int* ret = FindSingleNum(arr2, 14);
//	printf("%d  %d", ret[0], ret[1]);
//
//	return 0;
//}

//模拟实现strncpy
void my_strncpy(char* dest, const char* src, size_t n)
{
	assert(dest && src);
	while (n)
	{
		*dest++ = *src++;
		n--;
	}
}

//int main()
//{
//	char arr1[20] = "abcdefg";
//	char arr2[20] = "hello";
//	//strncpy(arr1, arr2, 5);
//	my_strncpy(arr1, arr2, 5);
//	printf(arr1);
//
//	return 0;
//}

//模拟实现strncat
void my_strncat(char* dest, const char* src, size_t n)
{
	assert(dest && src);
	while (*dest)
	{
		dest++;
	}
	while (n)
	{
		*dest++ = *src++;
		n--;
	}
}

//int main()
//{
//	char arr1[20] = "abcdefgh";
//	char arr2[20] = "hello";
//	//strncat(arr1, arr2, 5);
//	my_strncat(arr1, arr2, 5);
//
//	printf(arr1);
//
//
//	return 0;
//}


#include<math.h>
//模拟实现atoi

int my_atoi(const char* str)
{
	while (*str == ' ')
	{
		str++;
	}

	if (*str == '+' && *(str + 1) <= '9' && *(str + 1) >= '0')
	{
		int count = 0; //几位数
		char* begin = ++str;
		while (*str <= '9' && *str >= '0')
		{
			count++;
			str++;
		}
		printf("%d ", count);
		count--;
		int sum = 0;
		while (begin < str)
		{
			sum += ((int)(*begin++) - (int)'0') * pow(10, count--);
		}
		return sum;
	}
	if (*str <= '9' && *str >= '0')
	{
		int count = 0; //几位数
		char* begin = str;
		while (*str <= '9' && *str >= '0')
		{
			count++;
			str++;
		}
		printf("%d ", count);
		count--;
		int sum = 0;
		while (begin < str)
		{
			sum += ((int)(*begin++) - (int)'0') * pow(10, count--);
		}
		return sum;
	}
	if (*str == '-' && *(str + 1) <= '9' && *(str + 1) >= '0')
	{
		int count = 0; //几位数
		char* begin = ++str;
		while (*str <= '9' && *str >= '0')
		{
			count++;
			str++;
		}
		printf("%d ", count);
		count--;
		int sum = 0;
		while (begin < str)
		{
			sum += ((int)(*begin++) - (int)'0') * pow(10, count--);
		}
		return -sum;
	}
	return 0;
}

int main()
{
	char* s1;
	int i;
	s1 = " +9885 pigs";     
	i = my_atoi(s1);
	printf("atoi test: \nASCII string: %s\ninteger: %d\n\n", s1, i);

	s1 = " 9885 pigs";
	i = my_atoi(s1);
	printf("atoi test: \nASCII string: %s\ninteger: %d\n\n", s1, i);

	s1 = " -9885 pigs";
	i = my_atoi(s1);
	printf("atoi test: \nASCII string: %s\ninteger: %d\n\n", s1, i);

	s1 = " +-9885 pigs";
	i = my_atoi(s1);
	printf("atoi test: \nASCII string: %s\ninteger: %d\n\n", s1, i);

	return 0;
}
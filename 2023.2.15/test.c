#define _CRT_SECURE_NO_WARNINGS 1

//调整数组使奇数全部都位于偶数前面。
//#include<stdio.h>
//
//void Exchange(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,33,99,111 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Exchange(arr,sz);
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//模拟实现库函数strcpy
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const  char* sorc)
//{
//	assert(dest && sorc);
//
//	char* ret = dest;
//
//	while (*dest++ = *sorc++)
//	{
//		;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	char arr2[20];
//	my_strcpy(arr2, arr);
//	printf("%s", arr2);
//	return 0;
//}

//模拟实现库函数strlen
#include<stdio.h>
#include<assert.h>

int my_strlen(const char* arr)
{
	assert(arr);
	int count = 0;
	while (*arr++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdefgh";
	printf("%d", my_strlen(arr));

	return 0;
}
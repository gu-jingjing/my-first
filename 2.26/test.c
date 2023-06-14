#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
////使用库函数，qsort排序各种类型的数据
//
//struct Stu
//{
//	char name[20];
//	int score;
//};
//
//int cmp_stu_score(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//void stu_test()
//{
//	struct Stu s[] = { {"aaa",100},{"ddd",66},{"ccc",88} };
//	qsort(s, 3, sizeof(s[0]), cmp_stu_score);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s %d \n",(&s[i])->name, (&s[i])->score);
//	}
//	printf("\n");
//}
//
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//
//void int_test()
//{
//	int arr1[] = { 1,2,5,3,2,8,7 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	qsort(arr1, sz, sizeof(arr1[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//}
//
//int cmp_char(const void* p1, const void* p2)
//{
//	return *(char*)p1 - *(char*)p2;
//}
//
//void char_test()
//{
//	char arr[] = "aefdcb";
//	int sz = strlen(arr);
//	qsort(arr, sz, sizeof(char), cmp_char);
//	int i = 0;
//	printf("%s", arr);
//
//	printf("\n");
//
//}
//
//int main()
//{
//	int_test();
//	char_test();
//	stu_test();
//
//	return 0;
//}

#include<stdio.h>
#include<string.h>
//模仿qsort的功能实现一个通用的冒泡排序

void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *(buf1 + i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = tmp;
	}
}

void bubble_sort(void* base, size_t num, size_t width, int (*cmp)(const void* p1, const void* p2))
{
	int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int j = 0; 
		int flag = 1;

		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag)
		{
			break;
		}
	}
}

struct Stu
{
	char name[20];
	int score;
};

int cmp_stu_score(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

void stu_test()
{
	struct Stu s[] = { {"aaa",100},{"ddd",66},{"ccc",88} };
	bubble_sort(s, 3, sizeof(s[0]), cmp_stu_score);
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%s %d \n", (&s[i])->name, (&s[i])->score);
	}
	printf("\n");
}

int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

void int_test()
{
	int arr1[] = { 1,2,5,3,2,8,7 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	bubble_sort(arr1, sz, sizeof(arr1[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}

int cmp_char(const void* p1, const void* p2)
{
	return *(char*)p1 - *(char*)p2;
}

void char_test()
{
	char arr[] = "aefdcb";
	int sz = strlen(arr);
	bubble_sort(arr, sz, sizeof(char), cmp_char);
	int i = 0;
	printf("%s", arr);

	printf("\n");

}

int main()
{
	int_test();
	char_test();
	stu_test();

	return 0;
}
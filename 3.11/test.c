#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

//strlen的返回值是无符号数，注意 (size_t)

//模拟实现  1.计数器 2.递归  3.指针-指针
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	return my_strlen(str+1) + 1;
//}

int my_strlen(const char* str)
{
	char* end = str;
	while (*++end)
	{
		;
	}
	return end - str;
}

//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d ", len);
//
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{
	assert(src && dest);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

char* my_strcat(char* dest, const char* src)
{
	assert(src && dest);
	char* ret = dest;
	while (*++dest)
	{
		;
	}

	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2 && *str1 && *str2)
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

int main()
{
	char arr1[20] = "abcdef";
	char arr2[20] = "hijk";
	char arr3[] = "abcdef";

	//char* ret = my_strcpy(arr2, arr1);
	char* ret = my_strcat(arr1, arr2);

	printf("%s\n", ret);

	//int ret = my_strcmp(arr2, arr3);

	//if (ret > 0)
	//{
	//	printf(">\n");
	//}
	//else if(ret < 0)
	//{
	//	printf("<\n");
	//}
	//else
	//{
	//	printf("=\n");
	//}
	return 0;
}

char* my_strstr(const char* str1, const char* str2)
{
	char* s1 = NULL;
	char* s2 = NULL;
	char* cp = str1;
	while (*cp)
	{
		s1 = cp;
		s2 = str2;

		while (*s1 == *s2 && *s1 && *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cp;
		}
		cp++;
	}
	return NULL;
}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cde";
//	printf("%s\n", my_strstr(arr1, arr2));
//
//	return 0;
//}
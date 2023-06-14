#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<errno.h>

int my_strlen(const char* p)
{
	assert(p != NULL);
	int count = 0;
	while (*p != '\0')
	{
		p++;
		count++;
	}
	return count;
}

//int main()
//{
//	char arr[] = "abcdefg";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//
//	return 0;
//}

char* my_strcat(char* p1, const char* p2)
{
	assert(p1 && p2);
	char* ret = p1;
	while (*p1)
	{
		p1++;
	}
	while (*p1++ = *p2++)
	{
		;
	}
	return ret;
}

//int main()
//{
//	char arr[20] = "0dsf";
//	char arr2[] = "abcdef";
//	printf("%s", my_strcat(arr, arr2));
//	
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

//int main()
//{
//	char arr[] = { 'm','m'};
//	char arr2[] = "abcdefg";
//
//	printf("%s", my_strcpy(arr, arr2));
//
//	return 0;
//}

int my_strcmp(const char* p, const char* q)
{
	while (*p == *q)
	{
		if (*p == '\0')
		{
			return 0;
		}
		p++;
		q++;
	}

	return *p - *q;
}

//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcde";
//
//	int ret = strcmp(p, q);
//
//	printf("%d", ret);
//
//	return 0;
//}


//int main()
//{
//	char arr[20] = "abcdef";
//	char ar[20] ="wefefg";
//	strncpy(arr, ar, 6);
//	printf("%s", arr);
//
//	return 0;
//}

//模拟函数实现
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* cp = str1;

	if (*str2 == '\0')
	{
		return (char*)str1;
	}
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
			if (*s2 == '\0')
			{
				return (char*)cp;
			}
			cp++;
	}

}

//int main()
//{
//	char arr1[] = "aaaaabcd";
//	char arr2[] = "aaabcd";
//
//	char* ret = my_strstr(arr1, arr2);
//
//	if (ret ==NULL)
//	{
//		printf("没找到");
//	}
//	else
//	{
//		printf("找到了:%s\n", ret);
//	}
//
//	return 0;
//}


//strtok  -  切割字符串
//char * strtok ( char * str, const char * sep )

//int main()
//{
//	char arr[] = "2940@qq.com";
//	char* p = "@.";
//	char temp[20] = { 0 };
//	char* ret = NULL;
//	strcpy(temp, arr);
//
//	for (ret = strtok(temp, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//ret = strtok(temp, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	return 0;
//}


//strerror  -  返回错误码，所对应的错误信息
//  char * strerror ( int errnum );
//
//int main()
//{
//	printf("%s\n", strerror(1));
//
//	return 0;
//}


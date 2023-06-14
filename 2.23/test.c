#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC



#include<stdio.h>
#include<string.h>

int is_rotate(char* s1,char* s2)
{
	int count = strlen(s1);
	int sz = count;
	while (count > 0)
	{
		//字符串不一样,左旋一次字符串
		if (strcmp(s1, s2))
		{
			int end = sz-1;
			char tmp = *s1;
			while (end > 0)
			{
				*(s1 + sz - 1 - end) = *(s1 + sz - end);
				end--;
			}
			*(s1 + sz - 1) = tmp;
		}
		//字符串一样
		else
		{
			return 1;
		}
		count--;
	}
	return 0;
}

int main()
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";

	if (is_rotate(s1, s2))
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}

	return 0;
}
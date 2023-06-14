#define _CRT_SECURE_NO_WARNINGS 1

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC



#include<stdio.h>
#include<string.h>

int is_rotate(char* s1,char* s2)
{
	int count = strlen(s1);
	int sz = count;
	while (count > 0)
	{
		//�ַ�����һ��,����һ���ַ���
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
		//�ַ���һ��
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
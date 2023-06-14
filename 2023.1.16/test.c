#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//柔性数组

//struct S
//{
//	int a;
//	char arr[];
//};
//
//int main()
//{
//	//期望arr的大小是十个字符类型
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(char));
//
//	//增加
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(char));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//文件

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//
//
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
////写文件
//
//	fputc('h', pf);
//	fputc('e', pf);
//	fputc('l', pf);
//	fputc('l', pf);
//	fputc('o', pf);
//	fputs(" world", pf);
//
//
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}

int main()
{
	FILE* pf = fopen("test.txt", "r");

	if (pf == NULL)
	{
		perror(fopen);
		return 1;
	}

	int ret = fgetc(pf);
	printf("%c", ret);

	fclose(pf);
	pf = NULL;

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��������

//struct S
//{
//	int a;
//	char arr[];
//};
//
//int main()
//{
//	//����arr�Ĵ�С��ʮ���ַ�����
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(char));
//
//	//����
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

//�ļ�

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
////д�ļ�
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
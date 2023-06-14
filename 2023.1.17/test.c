#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	FILE* pf = fopen("D:\\C”Ô—‘\\Œ“µƒ\\the_first\\2023.1.17\\data.txt", "r");
	if (pf == NULL)
	{
		perror(fopen);
		return 1;
	}

	//fputc('b', pf);
	int ch = fgetc(pf);

	fclose(pf);
	pf = NULL;
	printf("%d", ch);

	return 0;
}
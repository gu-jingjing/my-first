#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��whileѭ���У�break�������õ���ֹѭ��,  continue������������ѭ��continue����Ĵ��룬ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��

//EOF   -   end of file   -   �ļ�������־  EOF������-1
//int main()
//{
//	int ch = getchar();
//	printf("%c\n ", ch);
//	putchar(ch);//���һ���ַ�
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//ctrl+z   -   getchar �Ͷ�ȡ����
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//	//��������
//	getchar();//����\n
//	printf("��ȷ������(Y/N)��");
//
//	int ch = getchar();
//
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//	//���������Ķ���ַ�
//	int temp = 0;
//	while ((temp = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ������(Y/N)��");
//
//	int ch = getchar();
//
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//
//	return 0;
//}

//����n�Ľ׳�
//int main()
//{
//	printf("������n��");
//	int n = 1;
//	long long num = 1;
//	scanf("%d", &n);
//
//	//int n = 10;
//	//long long num = 1;
//
//	int i = 1;
//	for (i = 1; i <=n; i++)
//	{
//		num = num * i;
//	}
//
//	printf("\n%d�Ľ׳�Ϊ��%d",n, num);
//
//	return 0;
//}


//����1��+2��+3��+......+10��
int nnn(n)
{
	int i = 1;
	long long num = 1;
	for (i = 1; i <= n; i++)
	{
		num = num * i;
	}
	return num;
}
//static long long sum;
int main()
{
	printf("1��+2��+3��+......+10�����Ϊ��");
	long long sum = 0;
	int j = 1;
	for (j = 1; j <= 10; j++)
	{
		nnn(j);
		sum = sum+ nnn(j);
	}
	printf("%lld", sum);
	return 0;
}



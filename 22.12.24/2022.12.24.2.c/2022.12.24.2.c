#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ��   ��4���ֽڣ�
//	printf("%p\n", &a);//%pר��������ӡ��ַ��
//
//	int* pa = &a;//pa��������ŵ�ַ�ģ���C������pa����ָ�����
//	//*˵�� pa ��ָ�����
//	//int ˵��paָ��Ķ�����int ���͵�
//
//
//
//	char ch = 'a';
//	char * pc = &ch;
//
//
//	return 0;
//}

int main()
{
	int a = 10;

	int* pa = &a;

	*pa = 22;//*  �����ò���  *pa����ͨ��pa����ĵ�ַ���ҵ�a

	printf("%d\n", a);
	return 0;
}
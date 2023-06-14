#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;//a在内存中要分配空间的   （4个字节）
//	printf("%p\n", &a);//%p专门用来打印地址的
//
//	int* pa = &a;//pa是用来存放地址的，在C语言中pa叫作指针变量
//	//*说明 pa 是指针变量
//	//int 说明pa指向的对象是int 类型的
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

	*pa = 22;//*  解引用操作  *pa就是通过pa里面的地址，找到a

	printf("%d\n", a);
	return 0;
}
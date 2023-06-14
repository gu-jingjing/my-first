

/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void test()
{
	//static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型）
	static int a = 1;//注意static.    a没有被销毁
	a++;
	printf("%d\t", a);
}

int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}*/


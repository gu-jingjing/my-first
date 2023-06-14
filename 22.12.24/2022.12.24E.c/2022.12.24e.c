#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
extern int ADD;
int main()
{
	static int AB = 100;

	AB = 1000;//      static 可以修饰全局变量，可以修饰局部变量，可以修饰函数。 static修饰的变量可以改变。

	printf("%d\n", AB);
	printf("%d", ADD);
	return 0;
}
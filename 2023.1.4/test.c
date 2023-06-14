#define _crt_secure_no_warnings 1
#include<stdio.h>
#include<string.h>

//int max(int x, int y)
//{
//	int z = 0;
//	z= x > y ? x : y;
//	return z;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	scanf("%d %d", &x, &y);
//	z = max(x, y);
//	printf("%d", z);
//
//	return 0;
//
//}


//int main()
//{
//	char arr[] = { 'a','b','c','\0' };
//
//	int a = strlen(arr);
//	printf("%d", a);
//
//	return 0;
//
//}

//sizeof括号中放的表达式不参与运算

//    *  -  解引用操作符   -   间接访问操作符
//
//int main()
//{
//	int a = 100;
//	int * pa = &a;
//	printf("%p\n", &a);
//	printf("%p\n", pa);
//
//	*pa = 200;
//	printf("%d\n", *pa);
//	printf("%d\n", a);
//
//	printf("%d", sizeof(char));
//
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("%d", i);
//	//  i = 1
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	逗号表达式  -  要从左向右依次计算，但是整个表达式的结果是最后一个表达式的结果
//	int d = (c = 5, a = c + 2, b = a + 3, c += 4);
//	   d = (c+=4)   -    d = 9
//
//	printf("%d %d %d %d", a, b, c, d);
//
//	return 0;
//}

//enum Sex
//{
//	FEMALE,
//	MALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex sex = MALE;
//	printf("%d  %d", sex, FEMALE);
//	return 0;
//}


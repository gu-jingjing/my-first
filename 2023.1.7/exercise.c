#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>


//int main()
//{
//	int a = 10;
//	int* const p1 = &a;
//	int b = 20;
//	const int* p2 = &b;
//	/**p1 = b;*/
//
//	p2 = &a;
//
//	printf("%d   %d", a, *p2);
//
//	return 0;
//}

//char* my_strcpy(char* arr1, const char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	char* ret = arr1;
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//
////size_t  -  unsigned int
//typedef unsigned int u_int;
//
//u_int my_strlen(const char* arr)
//{
//	assert(arr != NULL);
//	int count = 0;
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr1[] = "xxxxxxxxxxxxxxxxxxxxxxxxxx";
//	char arr2[] = "abcdefg";
//	char arr3[] = { '\0' };
//	char* p = arr3;
//	
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	printf("%d", my_strlen(arr2));
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	char* p = &a;
//	if (*p == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

//  大端字节序：  把数据的低位字节序的内容放在高地址处，高位字节序的内容放在低地址处
//  小端字节序：  把数据的低位字节序的内容放在低地址处，高位字节序的内容放在高地址处
//
//int key_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//
//int main()
//{
//	int ret = key_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u", a);
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i > 0; i--)
//	{
//		printf("%u\n", i);
//		
//	}
//	return 0;
//}

//#include<limits.h>
//#include<float.h>
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//
//	return 0;
//}


//int main()
//{
//	char arr[] = { "abcdef" };
//	char* p = "abcdef";
//
//	printf("%s\n", arr);
//	printf("%s\n", p);
//	printf("%c\n", *p);
//	//注意区别    %s  输入的是字符串地址
//
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcdefg";
//	const char* p2 = "abcdefg";
//
//	//"abcdefg"是一个常量字符串，不可被更改，  p1,p2是一样的，指向字符串首个字符的地址
//
//	if (p1 == p2)
//	{
//		printf("same");
//	}
//	else
//	{
//		printf("not same");
//	}
//
//	return 0;
//}

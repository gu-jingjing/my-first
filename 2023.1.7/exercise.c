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
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}

//  ����ֽ���  �����ݵĵ�λ�ֽ�������ݷ��ڸߵ�ַ������λ�ֽ�������ݷ��ڵ͵�ַ��
//  С���ֽ���  �����ݵĵ�λ�ֽ�������ݷ��ڵ͵�ַ������λ�ֽ�������ݷ��ڸߵ�ַ��
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
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
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
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);
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
//	//ע������    %s  ��������ַ�����ַ
//
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcdefg";
//	const char* p2 = "abcdefg";
//
//	//"abcdefg"��һ�������ַ��������ɱ����ģ�  p1,p2��һ���ģ�ָ���ַ����׸��ַ��ĵ�ַ
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

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
//struct Stu
//{
//	char name[40];
//	int age;
//
//};
//
//void Print(struct Stu* pa)
//{
//	printf("%s   %d\n", (*pa).name, pa->age);
//}
//
//int main()
//{
//	struct Stu s2 = { "aaa",22 };
//
//	Print(&s2);
//
//	printf("%s", s2.name);
//
//	return 0;
//}
//

void my_strcpy(char* arr1,const char* arr2)
{
	assert(arr1 != NULL);//╤оят
	assert(arr2 != NULL);
	while (*arr1++ = *arr2++)
	{
		;
	}

}

int main()
{
	char arr1[] = "xxxxxxxxxxxxxxx";
	char arr2[] = "abcdefg";
	my_strcpy(arr1, arr2);

	printf("%s", arr1);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#define NUM 2

#define MAX 1

//int main()
//{
//#if NUM == 1
//	printf("%d ", 1);
//#elif NUM == 2
//	printf("%d ", 2);
//#else
//	printf("%d ", 3);
//#endif
//
//#if defined(MAX)
//	printf("yes");
//#endif
//
//
//	return 0;
//}

//print(char* s)
//{
//	if (*s)
//	{
//		print(++s);
//		printf("%c", *s);
//	}
//}
//int main()
//{
//	char str[] = "Geneius";
//	print(str);
//	return 0;
//}


//int main() {
//    char arr[1001] = { 0 };
//    scanf("%s", arr);
//    int sz = strlen(arr);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < sz; i++)
//    {
//        for (j = 0; j < sz-i; j++)
//        {
//            if (((int)arr[j]) > ((int)arr[j + 1]))
//            {
//                char temp = arr[j + 1];
//                arr[j + 1] = arr[j];
//                arr[j] = temp;
//            }
//        }
//
//    }
//    for (i = 1; i <= sz; i++)
//    {
//        printf("%c", arr[i]);
//    }
//
//    return 0;
//}



int main()
{
	char a[] = "x+y = 5.";
	printf("%s", a);

	return 0;
}
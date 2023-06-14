#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//不创建临时变量，交换两个整数的值
//	int a = 4;
//	int b = 8;
//	printf("a = %d, b = %d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a = %d, b = %d\n", a, b);
//
//	return 0;
//}


int NumberOf1(int n) {
    // write code here
    int i = 1;
    int count = 0;
    int k = 0;
    int x = n;

    if (x < 0)
    {
        int n = ~x;
        n += 1;
    }
    for (k = 32; k >= 0; k--)
    {
        if (n & i)
        {
            count++;
        }
        n >>= 1;
    }
    if (x < 0)
    {
        return --count;
    }
    return count;
}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//int main()
//{
//    int x = 0;
//    scanf("%d", &x);
//
//    int i = 0;
//    printf("奇数位：");
//    for (i = 30; i >= 0; i -= 2)
//    {
//        if ((x >> i)&1)
//        {
//            printf("1");
//        }
//        else
//        {
//            printf("0");
//        }
//    }
//    printf("\n");
//
//    printf("偶数位：");
//    for (i = 31; i > 0; i -= 2)
//    {
//        if ((x >> i) & 1)
//        {
//            printf("1");
//        }
//        else
//        {
//            printf("0");
//        }
//    }
//
//
//    return 0;
//}


//输入两个整数，求两个整数二进制格式有多少个位不同
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int c = a ^ b;
    int count = 0;
    int k = 0;
    for (k = 0; k < 32; k++)
    {
        if ((c >> k) & 1)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
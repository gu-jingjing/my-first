#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//��������ʱ��������������������ֵ
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

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

//int main()
//{
//    int x = 0;
//    scanf("%d", &x);
//
//    int i = 0;
//    printf("����λ��");
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
//    printf("ż��λ��");
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


//�����������������������������Ƹ�ʽ�ж��ٸ�λ��ͬ
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
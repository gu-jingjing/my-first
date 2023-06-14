#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//int main() {
//    int m = 0, n = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//
//
//    int* ans = malloc(sizeof(int) * (m + n));
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &ans[i]);
//    }
//
//    for (i = n; i < m + n; i++)
//    {
//        scanf("%d", &ans[i]);
//    }
//
//    for (i = 0; i < m + n; i++)
//    {
//        int j = 0;
//        for (j = 1; j < m + n - i; j++)
//        {
//            if (ans[j - 1] > ans[j])
//            {
//                int tmp = ans[j];
//                ans[j] = ans[j - 1];
//                ans[j - 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < m + n; i++)
//    {
//        printf("%d ", ans[i]);
//    }
//
//    free(ans);
//    ans = NULL;
//
//    return 0;
//}

//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int a = 1;
//    int b = 2;
//
//    int sum = 0;
//    int i = 0;
//    if (n == 1)
//    {
//        sum = a;
//    }
//    if (n == 2)
//    {
//        sum = b;
//    }
//    if (n >= 3)
//    {
//        for (i = 0; i < n - 2; i++)
//        {
//            sum = a + b;
//            a = b;
//            b = sum;
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}

//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）,
//（14和61）,（146和1),如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//int main() {
//    int i = 0;
//    for (i = 10000; i < 100000; i++)
//    {
//        int sum = 0;
//        int m = i;
//        int j = 0;
//        for (j = 0; j < 4; j++)
//        {
//
//            m /= 10;
//            int a = i - m * pow(10, j + 1);
//            sum += (a * m);
//        }
//        if (sum == i)
//        {
//            printf("%d ", i);
//        }
//
//    }
//    return 0;
//}

//KiKi想知道已经给出的三条边a，b，c能否构成三角形，
//如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
int main() {
    int a = 0, b = 0, c = 0;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if (a + b <= c || a + c <= b || b + c <= a)
        {
            printf("Not a triangle!\n");
        }
        else
        {
            if (a == b && b == c)
            {
                printf("Equilateral triangle!\n");
            }
            else if (a == b || b == c || a == c)
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
    }
    return 0;
}
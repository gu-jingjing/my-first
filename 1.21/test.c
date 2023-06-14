#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//
//    long a = 0;
//    long j = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a);
//        j ^= a;
//    }
//
//    printf("%ld", j);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int a = 1;
//    //兔子的数量实质是斐波那契数列
//    int b = 1;
//    int c = 1;
//    if (n < 3)
//    {
//        printf("%d", c);
//    }
//    else
//    {
//        int i = 3;
//        for (i = 3; i <= n; i++)
//        {
//            c = a + b;
//            a = b;
//            b = c;
//        }
//        printf("%d", c);
//    }
//    return 0;
//}

//#include <stdio.h>
//#include<string.h>
//int main() {
//    char arr[10000] = { 0 };
//    char ret[10000] = { 0 };
//
//    int i = 0;
//    int len = 0;
//    while ((scanf("%c", &arr[i])) != EOF)
//    {
//        i++;
//        len++;
//    }
//
//    int over = 0;
//    int k = 0;
//    int j = 0;
//    for (i = len - 1; i >= 0; i--)
//    {
//
//        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
//        {
//            int tmp = i;
//
//            while ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
//            {
//                over = i;
//                i--;
//            }
//            for (j = over; j <= tmp; j++)
//            {
//                ret[k] = arr[j];
//                k++;
//            }
//
//            if (i > 0)
//            {
//                ret[k] = ' ';
//                k++;
//            }
//        }
//    }
//    for (i = 0; i < k; i++)
//    {
//        printf("%c", ret[i]);
//    }
//
//    return 0;
//}


#include <stdio.h>
#include<math.h>
int main() {
    int n = 0;
    int m = 0;
    while ((scanf("%d %d", &n, &m)) != EOF)
    {
        double sum = 0.0;
        sum += (double)n;
        double tmp = 0.0;
        tmp = (double)n;
        while (m > 1)
        {
            double next = (double)sqrt(tmp);
            tmp = next;
            sum += next;
            m--;
        }
        printf("%.2lf\n", sum);
    }


    return 0;
}
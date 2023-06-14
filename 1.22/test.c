#define _CRT_SECURE_NO_WARNINGS 1

//计算完全数个数

#include <stdio.h>
#include<stdio.h>
int main() {
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int count = 0;
    for (i = 2; i <= n; i++)
    {
        int sum = 0;
        int j = 1;
        for (j = 1; j < (i / 2 + 1); j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            count++;
        }
    }
    printf("%d", count);


    return 0;
}

//给定一个二进制数组， 计算其中最大连续 1 的个数。

int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int i = 0;
    int count = 0;
    int compare = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (count == 0)
        {
            while (nums[i])
            {
                count++;
                if (i < numsSize - 1)
                {
                    i++;
                }
                else
                    break;

            }
        }
        if (count)
        {
            while (nums[i])
            {
                compare++;
                if (i < numsSize - 1)
                {
                    i++;
                }
                else
                    break;
            }
        }
        if (count && compare)
        {
            count = count > compare ? count : compare;
            compare = 0;
        }
    }
    return count;

}


//输入一个整数，将这个整数以字符串的形式逆序输出
//程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    char arr[10000] = { 0 };
//    char tmp = '0';
//    int j = 0;
//    if (n == 0)
//    {
//        printf("%c", '0');
//    }
//    else
//    {
//        while (n)
//        {
//
//            if (n % 10)
//            {
//                tmp = (char)(n % 10 + 48);
//            }
//            else
//            {
//                tmp = '0';
//            }
//
//            n /= 10;
//            arr[i] = tmp;
//            i++;
//        }
//        for (j = 0; j < i; j++)
//        {
//            printf("%c", arr[j]);
//        }
//
//    }
//
//    return 0;
//}
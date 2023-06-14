#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//字符串逆序
//int main()
//{
//    int count = 0;
//    char arr[10001] = { 0 };
//    while (scanf("%c", &arr[count]) != EOF)
//    {
//        count++;
//    }
//    count--;
//
//    int i = 0;
//    int begin = 0;
//    int last = count - 1;
//    while (begin < last)
//    {
//        int tmp = *(arr + begin);
//        *(arr + begin) = *(arr + last);
//        *(arr + last) = tmp;
//        begin++;
//        last--;
//    }
//    for (i = 0; i < count; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
int main()
{
    int bottle = 0;
    int count = 0;
    int cola = 0;
    int price = 1;
    int money = 20;
    cola += money / price;
    money -= cola * price;
    bottle = cola;
    count = cola;
    while ((bottle -= 2) >= 0)
    {
        cola++;
        bottle++;
        count++;
    }
    printf("%d", count);
    return 0;
}
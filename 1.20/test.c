#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
int main() {
    char arr[501] = { 0 };
    scanf("%s", arr);
    int len = strlen(arr);
    char c = 0;
    int i = 0;
    int j = 0;

    for (i = 0; i < 128; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (i == arr[j])
            {
                c++;
                break;
            }
        }
    }

    printf("%d", c);
    return 0;
}

int* selfDividingNumbers(int left, int right, int* returnSize) {
    int i = 0;
    int flag = 0;
    int j = 0;
    int count = 0;
    int* ret = (int*)malloc((right - left + 1) * (sizeof(int)));

    while (left <= right)
    {
        flag = 0;


        //判断是否自除数
        int tmp = left;
        i = tmp % 10;
        while ((i != 0) && (left % i == 0))
        {

            tmp /= 10;
            i = tmp % 10;

            if (tmp == 0)
            {
                flag = 1;
                break;
            }
        }
        //将自除数添加到ret中
        if (flag)
        {
            if ((left % 10) != 0)
            {
                ret[j] = left;
                j++;
                count++;
            }
        }
        left++;

    }
    *returnSize = count;
    return ret;

}


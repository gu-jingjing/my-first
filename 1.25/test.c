#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//给出一个整型数组 numbers 和一个目标值 target，请在数组中找出两个加起来等于目标值的数的下标，返回的下标按升序排列。
//（注：返回的数组下标从1开始算起，保证target一定可以由数组里面2个数字相加得到）

int* twoSum(int* numbers, int numbersLen, int target, int* returnSize) {
    // write code here
    *returnSize = 2;
    int* ret = (int*)malloc(2 * sizeof(int));

    int i = 0;
    int j = 0;
    for (i = 0; i < numbersLen; i++)
    {
        if (numbers[i] > target + 10)
        {
            continue;
        }

        for (j = i + 1; j < numbersLen; j++)
        {
            if (numbers[j] > target + 10)
            {
                continue;
            }

            if ((numbers[i] + numbers[j]) == target)
            {
                ret[0] = i + 1;
                ret[1] = j + 1;

            }

        }

    }
    return ret;
}


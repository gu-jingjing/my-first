#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����һ���������� numbers ��һ��Ŀ��ֵ target�������������ҳ���������������Ŀ��ֵ�������±꣬���ص��±갴�������С�
//��ע�����ص������±��1��ʼ���𣬱�֤targetһ����������������2��������ӵõ���

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


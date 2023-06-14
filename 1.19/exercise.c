#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



int main()
{
    int nums[] = { 8,2,9,8,7,7,7,7,7,7,8 };
    int numsSize = 11;
    int time = numsSize / 2 + 1;
    int count = 0;
    int i = 0;
    int j = 0;
    int f[50] = { 0 };
    int k = 0;
    int m = 0;
    int flag = 1;
    int ret = 0;
    if (numsSize == 1)
    {
        ret = nums[0];
    }
    else
    {
        for (i = 0; i <= time; i++)
        {
            flag = 1;
            if (ret == 0)
            {
                for (m = 0; m < k; m++)
                {
                    if (nums[i] == f[m])
                    {
                        flag = 0;

                        break;
                    }
                }
                if (flag)
                {
                    count = 1;
                    for (j = i + 1; j < numsSize; j++)
                    {
                        if (nums[i] == nums[j])
                        {
                            count++;
                        }
                        if (count >= time)
                        {
                            ret = nums[i];
                        }

                    }
                    f[k] = nums[i];
                    k++;

                }
            }
        }
    }


    printf("%d ", ret);

	return 0;
}
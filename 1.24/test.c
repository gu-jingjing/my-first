#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//
//给定一个长度为n的数组nums，请你找到峰值并返回其索引。数组可能包含多个峰值，在这种情况下，返回任何一个所在位置即可。
//1.峰值元素是指其值严格大于左右相邻值的元素。严格大于即不能有等于
//2.假设 nums[-1] = nums[n] =
//−
//∞
//−∞
//3.对于所有有效的 i 都有 nums[i] != nums[i + 1]

int findPeakElement(int* nums, int numsLen) {
    // write code here
    int compare = 0;
    int flag = 1;
    if (numsLen > 2)
    {
        while (flag <= numsLen - 1)
        {
            if (nums[compare] < nums[flag])
            {
                compare = flag + 1;
                if (nums[compare] < nums[flag])
                {
                    return flag;
                }
                else
                {
                    int tmp = compare;
                    compare = flag;
                    flag = tmp;
                }
            }
            else
            {
                flag++;
                compare++;
            }
            if ((flag == numsLen - 1) && (nums[compare] < nums[flag]))
            {
                return flag;
            }
            else if ((flag == numsLen - 1) && (nums[compare] > nums[flag]))
            {
                return 0;
            }
        }
    }
    else if (numsLen == 2)
    {
        if (nums[compare] > nums[flag])
        {
            return 0;
        }
        else if (nums[compare] < nums[flag])
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
    return -1;
}

int main()
{
    return 0;
}
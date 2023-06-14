#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//����������Ϸ��the game of master mind�����淨���¡�
//
//�������4���ۣ�ÿ���۷�һ������ɫ�����Ǻ�ɫ��R������ɫ��Y������ɫ��G������ɫ��B�������磬�����������RGGB 4�֣���1Ϊ��ɫ����2��3Ϊ��ɫ����4Ϊ��ɫ������Ϊ�û�������ͼ�³���ɫ��ϡ�����ȷ�������ܻ��YRGB��Ҫ�ǲ¶�ĳ���۵���ɫ������һ�Ρ����С���Ҫ��ֻ�¶���ɫ����λ�´��ˣ�����һ�Ρ�α���С���ע�⣬�����С��������롰α���С���
//
//����һ����ɫ���solution��һ���²�guess����дһ�����������ز��к�α���еĴ���answer������answer[0]Ϊ���еĴ�����answer[1]Ϊα���еĴ�����


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* masterMind(char* solution, char* guess, int* returnSize) {
    int* answer = (int*)malloc(2 * sizeof(int));
    int correct = 0;
    int fcorrect = 0;
    *returnSize = 2;

    //������д���
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        if (solution[i] == guess[i])
        {
            solution[i] = 'F';
            guess[i] = 'S';
            correct++;
        }
    }
    answer[0] = correct;

    //����α���д���
    for (i = 0; i < 4; i++)
    {
        int j = 0;
        while (j < 4)
        {
            if (guess[i] == solution[j])
            {
                fcorrect++;
                solution[j] = 'f';
                break;
            }
            j++;
        }

    }
    answer[1] = fcorrect;

    return answer;
}


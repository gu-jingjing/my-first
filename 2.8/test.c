#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���������������е����У����������кϲ�Ϊһ���������в������
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

//С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷���
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

//����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�����1461 ���Բ�ֳɣ�1��461��,
//��14��61��,��146��1),������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
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

//KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�
//����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
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
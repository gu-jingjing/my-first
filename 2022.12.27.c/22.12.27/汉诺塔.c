#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

void move(int n, char a, char b, char c)
{
    if (n == 1)
    {
        printf("\t%c->%c\n", a, c); //��nֻ��1����ʱ��ֱ�Ӵ�a�ƶ���c 
        
    }
    else
    {
        move(n - 1, a, c, b);            //��a��n-1������ͨ��c�ƶ���b 
        
        printf("\t%c->%c\n", a, c);   //��a�����1����(������)�ƶ���c 
       
        move(n - 1, b, a, c);     //��b�����n-1����ͨ��a�ƶ���c 
       
    }
}

int main()
{
    int n;
    printf("������Ҫ�ƶ��Ŀ�����");
    scanf("%d", &n);
    move(n, 'a', 'b', 'c');
   
    return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����  (b == 2 && a != 3) || (b != 2 && a == 3)
//Bѡ��˵���ҵڶ���E���ģ�  (b == 2 && e != 4) || (b != 2 && e == 4)
//Cѡ��˵���ҵ�һ��D�ڶ���  (c == 1 && d != 2) || (c != 1 && d == 2)
//Dѡ��˵��C����ҵ�����  (c == 5 && d != 3) || (c != 5 && d == 3)
//Eѡ��˵���ҵ��ģ�A��һ��  (e == 4 && a != 1) || (e != 4 && a == 1)
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//#include<stdio.h>
//
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//
//	b = 2, c = 1, d = 3, e = 4, a = 5;
//	if (a != 3 && e != 4 && d != 2 && d == 3 && a != 1)
//	{
//		printf("a = %d , b = %d , c = %d , d = %d , e = %d\n", a, b, c, d, e);
//		return 0;
//	}
//
//	a = 3, e = 4, c = 5, d = 2, b = 1;
//	if (b != 2 && a != 1 && d != 3 && c != 1)
//	{
//		printf("a = %d , b = %d , c = %d , d = %d , e = %d\n", a, b, c, d, e);
//		return 0;
//	}
//
//	return 0;
//}

//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//
//A˵�������ҡ� a == 0
//B˵����C��    c == 1    (c==0)
//C˵����D      d == 1    (d==0)
//D˵��C�ں�˵  d == 0
//
//��֪3����˵���滰��1����˵���Ǽٻ���
//
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//#include<stdio.h>
//
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	//C��B˵�ٻ�
//
//	//B˵�ٻ�
//	d = 1;
//	if (a == 0 && c == 0 && d == 0)
//	{
//		printf("D������");
//		return 0;
//	}
//
//	a = 0, b = 0, c = 0, d = 0;
//
//	//C˵�ٻ�
//	c = 1;
//	if (a == 0 && c == 1 && d == 0)
//	{
//		printf("C������");
//		return 0;
//	}
//
//	return 0;
//}

//�������
#include<stdio.h>

int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	int* arr = malloc(sizeof(int) * n);
	int* front = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			arr[0] = 1;
			arr[i] = 1;
			if (i >= 2 && j >= 1 && j <= (i / 2))
			{
				arr[j] = front[j - 1] + front[j];
				arr[i - j] = arr[j];
			}
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%-4d ", arr[j]);
			front[j] = arr[j];
		}
		printf("\n");
	}
	free(arr);
	arr = NULL;
	free(front);
	front = NULL;

	return 0;
}
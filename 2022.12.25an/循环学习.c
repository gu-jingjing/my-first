#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>//ʹ��Sleep������Ҫ���õ�ͷ�ļ�
#include<string.h>

////����1��+2��+......n!   �Ż�
//int main()
//{
//	int n = 1;
//	int ret = 1;
//	long long sum = 0;
//	for (n = 1; n <= 5; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

////����ָ��ֵ�����������е��±�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;//Ҫ���ҵ�ֵ
//	int sz = (sizeof(arr)) / (sizeof(arr[0]));
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���%d\n", mid);
//			break;
//		}
//	}
//	
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "welcome to hello world!";
//	char arr2[] = "***********************";
//
//	int left = 0;
//	int right = strlen(arr1)-1;
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��һ��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char arr[30] = { 0 };
//	char password[] = "123456";
//	printf("���������룺");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", arr);
//		if (strcmp(password,arr)==0)//�����ַ����Ƚϣ�����ʹ�� ==  ��Ӧ��ʹ��strcmp
//		{
//			printf("������ȷ,��ӭʹ��");
//			break;
//		}
//		else
//		{
//			printf("�������������");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����");
//	}
//
//
//	return 0;
//
//}
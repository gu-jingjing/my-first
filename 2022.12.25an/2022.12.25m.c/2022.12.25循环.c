#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////���1-100֮�������
//int main()
//{
//	int i = 0;
//
//	for (i = 0; i <= 100; i++)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d\t", i);
//		}
//	}
//	return 0;
//}

//switch���
int main()
{
	int day = 0;
	scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//	printf("Monday\n");
	//	break;
	//case 2:
	//	printf("Tuesday\n");
	//	break;
	//case 3:
	//	printf("Wednesday\n");
	//	break;
	//case 4:
	//	printf("Thursday\n");
	//	break;
	//case 5:
	//	printf("Friday\n");
	//	break;
	//case 6:
	//	printf("Saturday\n");
	//	break;
	//case 7:
	//	printf("Sunday\n");
	//	break;
	//}

	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;

	case 6:
	case 7:
		printf("��Ϣ��");
		break;
	default:
		printf("δ֪����\n");
		break;
	}
	return 0;
}
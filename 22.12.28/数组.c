#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

/*��������������Ԫ�صĵ�ַ
������2������
1.sizeof(������)  -  ��������ʾ��������  -  ���������������Ĵ�С  ��λ���ֽ�
2.  &������  -  ��������ʾ��������  -  ȡ��������������ĵ�ַ    */

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\t", *p);
//		p++;
//	}
//	printf("\n");
//
//	for(i = 0; i < 10; i++)
//	{
//		printf("%p\t", p);
//		p++;
//	}
//	return 0;
//}

////��ά�����������д洢��������
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d  ", *p);
//		p++;
//	}
//
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("&arr[%d][%d]=%p\t",i,j, &arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < (sz - 1); i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//
//}
//
////ð�������������ڵ�Ԫ�ؽ��бȽϣ����ҿ��ܵĻ���Ҫ����
////ʮ�����֣���Ҫ����ð������
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//����Ϊ����  ð������
//	//��������Ԫ�ظ���
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	bubble_sort(arr,sz);
//	int* p = &arr[0];
//	int i = 0;
//		for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", *p);
//		p++;
//	}
//
//	return 0;
//}

//void menu()
//{
//	printf("*********************************\n");
//	printf("********      1.play     ********\n");
//	printf("********      0.exit     ********\n");
//	printf("*********************************\n");
//}
//
//void game()
//{
//	char board[ROW][COL];
//	//��ʼ������
//	InitBoard(board, ROW, COL);
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//������д���
// 
// 
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	//�ж��Ƿ����
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == board[i][j + 1]=='*')
//			{
//				if (board[i][col - 1] == '*')
//				{
//					return '*';
//					break;
//				}
//			}
//			
//			if (board[i][j] == board[i][j + 1] == '#')
//			{
//				if (board[i][col - 1] == '#')
//				{
//					return '#';
//					break;
//				}
//			}
//		}
//	}
//	//�ж��Ƿ����
//	for (j = 0; j < row; j++)
//	{
//		for (i = 0; i < col; i++)
//		{
//			if (board[i][j] == board[i+1][j] == '*')
//			{
//				if (board[row - 1][j] == '*')
//				{
//					return '*';
//					break;
//				}
//			}
//			if (board[i][j] == board[i+1][j] == '#')
//			{
//				if (board[row - 1][j] == '#')
//				{
//					return '#';
//					break;
//				}
//			}
//		}
//	}
//	//�ж��Ƿ�б��
//
//	for (i=0,j=0;i<row,j<col;i++,j++)
//	{
//		if ((board[i][j] == board[i + 1][j + 1])&&board[i][j]=='*')
//		{
//			if (board[row - 1][col - 1] == '*')
//			{
//				return '*';
//				break;
//			}
//		}
//		if ((board[i][j] == board[i + 1][j + 1]) && board[i][j] == '#')
//		{
//			if (board[row - 1][col - 1] == '#')
//			{
//				return '#';
//				break;
//			}
//		}
//	}
//
//	for (i = row - 1; i >= 0; i--)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if ((board[i][j] == board[i + 1][j + 1]) && board[i][j] == '*')
//			{
//				if (board[ 1 ][col - 1] == '*')
//				{
//					return '*';
//					break;
//				}
//			}
//			if ((board[i][j] == board[i + 1][j + 1]) && board[i][j] == '#')
//			{
//				if (board[1][col - 1] == '#')
//				{
//					return '#';
//					break;
//				}
//			}
//		}
//	}
//	return 'C';
//}

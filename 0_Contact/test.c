#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

enum CHOOSE
{
	Exit,
	Add,
	Delete,
	Find,
	Modify,
	Print,
	Empty,
	Sort
};

void menu()
{
	printf("*******************************************\n");
	printf("**********    1.Add    2.Delete    *******\n");
	printf("**********    3.Find   4.Modify     *******\n");
	printf("**********    5.Print  6.Empty      *******\n");
	printf("**********    7.Sort   0.Exit       *******\n");
	printf("*******************************************\n");

}

//void test()
//{
//	Contact con;
//	ContactInit(&con);
//
//	AddInfo(&con);
//	AddInfo(&con);
//	AddInfo(&con);
//	AddInfo(&con);
//	AddInfo(&con);
//	PrintInfo(&con);
//
//	SortByName(&con);
//	PrintInfo(&con);
//	DestroyContact(&con);
//
//}

int main()
{
	Contact con;
	ContactInit(&con);
	int input = 0;
	do
	{
		menu();
		printf("«Î ‰»Î—°‘Ò£∫");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddInfo(&con);
			break;
		case Delete:
			DeleteInfo(&con);
			break;
		case Find:
			FindInfo(&con);
			break;
		case Modify:
			ModifyInfo(&con);
			break;
		case Print:
			PrintInfo(&con);
			break;
		case Empty:
			EmptyInfo(&con);
			break;
		case Sort:
			SortByName(&con);
			break;
		case Exit:
			SaveContact(&con);
			DestroyContact(&con);
			break;

		}
	} while (input);

	return 0;
}
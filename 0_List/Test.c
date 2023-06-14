#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

void TestList1()
{
	LTNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);

	ListPrint(plist);

	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);

	ListPrint(plist);
	ListDestroy(plist);
	plist = NULL;
}

void TestList2()
{
	LTNode* plist = ListInit();
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);
	ListPushFront(plist, 5);



	ListPrint(plist);

	ListPopFront(plist);
	ListPopFront(plist);
	ListPopFront(plist);


	ListPrint(plist);
	ListDestroy(plist);
	plist = NULL;
}

void TestList3()
{
	LTNode* plist = ListInit();
	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);
	ListPushFront(plist, 5);



	ListPrint(plist);

	ListInsert(plist->next->next, 8);
	ListPrint(plist);

	ListInsert(plist->next->next, 7);
	ListPrint(plist);

	ListInsert(plist->next->next, 6);
	ListPrint(plist);

	ListInsert(plist, 11);
	ListPrint(plist);

	ListErase(plist->next);
	ListPrint(plist);
	ListErase(plist->next->next);
	ListPrint(plist);

	ListDestroy(plist);
	plist = NULL;
}

int main()
{
	//TestList1();
	//TestList2();
	TestList3();


	return 0;
}
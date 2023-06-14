#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void SLTest1()
{
	SListNode* plist = NULL;
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 2);

	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);

	SListPrint(plist);

	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopBack(&plist);


	SListPrint(plist);
	SListDestroy(plist);

}

void SLTest2()
{
	SListNode* plist = NULL;
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 2);

	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);

	SListPrint(plist);
	SListInsertAfter(plist->next, 3);
	SListPrint(plist);
	SListInsertAfter(plist, 5);
	SListPrint(plist);
	SListEraseAfter(plist);
	SListEraseAfter(plist);


	SListPrint(plist);

	SListDestroy(plist);

}

int main()
{
	//SLTest1();
	SLTest2();

	return 0;
}
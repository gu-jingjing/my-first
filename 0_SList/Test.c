#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void TestSList1()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPrint(plist);

	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 5);
	SListPrint(plist);

}

void TestSList2()
{
	SLTNode* plist = NULL;

	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 5);
	SListPrint(plist);

	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist);

}

void TestSList3()
{
	SLTNode* plist = NULL;

	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 5);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPrint(plist);

	SListPopFront(&plist);


	SListPrint(plist);

}

void TestSList4()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 5);
	SListPrint(plist);

	SLTNode* pos = SListFind(plist, 2);
	int i = 1;
	while(pos)
	{
		printf("第%d个pos节点:%p->%d\n", i++, pos,pos->data);
		pos = SListFind(pos->next, 2);
	}
	SListPrint(plist);

}

void TestSList5()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPrint(plist);

	//SLTNode* node =  SListFindMax(plist);
	//printf("%d\n", node->data);

	SListReverse(&plist);
	SListPrint(plist);

	SListDestroy(&plist);

}

void TestSList6()
{
	SLTNode* plistA = NULL;
	SListPushBack(&plistA, 1);
	SListPushBack(&plistA, 2);
	SListPushBack(&plistA, 3);
	SListPushBack(&plistA, 4);
	SListPushBack(&plistA, 5);
	SListPrint(plistA);

	SLTNode* plistB = NULL;
	SListPushBack(&plistB, 1);
	SListPushBack(&plistB, 4);
	SListPushBack(&plistB, 5);
	SListPushBack(&plistB, 6);
	SListPushBack(&plistB, 7);
	SListPushBack(&plistB, 9);
	SListPrint(plistB);


	SListIntersectionAandB(&plistA, &plistB);
	SListPrint(plistA);


	SListDestroy(&plistA);
	SListDestroy(&plistB);


}


void TestSList7()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 0);

	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPrint(plist);


	SLTNode* plistB = NULL;
	SListPushBack(&plistB, 0);


	SLTNode* plistC = NULL;
	SListPushBack(&plistC, 0);

	SListSeparate(plist, plistB, plistC);



	SListPrint(plistB);

	SListPrint(plistC);

	SListDestroy(&plistB);
	SListDestroy(&plistC);


}

void TestSList8()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 8);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPrint(plist);

	int max = SListMax(plist);
	printf("%d\n", max);
	SListPrint(plist);

	SListDestroy(&plist);

}


int main()
{
	//TestSList1();
	//TestSList2();
	//TestSList3();
	//TestSList4();
	//TestSList5();
	//TestSList7();
	TestSList8();


	return 0;
}
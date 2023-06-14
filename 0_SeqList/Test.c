#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void TestSeqList1()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPushBack(&s1, 6);

	SeqListPrint(&s1);

	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);

	SeqListPrint(&s1);

	SeqListDestroy(&s1);
}
void TestSeqList2()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);

	SeqListPrint(&s1);

	SeqListPushFront(&s1, 8);
	SeqListPushFront(&s1, 7);
	SeqListPushFront(&s1, 6);
	SeqListPrint(&s1);

	SeqListPopFront(&s1);
	SeqListPopFront(&s1);
	SeqListPopFront(&s1);
	SeqListPopFront(&s1);



	SeqListPrint(&s1);

	SeqListDestroy(&s1);
}

void TestSeqList3()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);

	SeqListPrint(&s1);

	SeqListFind(&s1, 7);

	SeqListInsert(&s1, 1, 8);
	SeqListInsert(&s1, 2, 22);
	SeqListInsert(&s1, 5, 55);
	SeqListInsert(&s1, 8, 88);

	SeqListPrint(&s1);

	SeqListErease(&s1, 1);
	SeqListPrint(&s1);

	SeqListErease(&s1, 7);
	SeqListPrint(&s1);

	SeqListErease(&s1, 2);

	SeqListPrint(&s1);

	SeqListDestroy(&s1);
}

void TestSeqList4()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 7);

	SeqListPrint(&s1);

	SeqListPopItem(&s1, 3);

	SeqListPrint(&s1);

	SeqListDestroy(&s1);
}

int main()
{
	//TestSeqList1();
	//TestSeqList2();
	//TestSeqList3();
	TestSeqList4();


	return 0;
}


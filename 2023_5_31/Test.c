#define _CRT_SECURE_NO_WARNINGS 1

#include"BinaryTree.h"

void BTTest1()
{
	BTNode* bt = BinaryTreeCreate();

	printf("size:%d\n", BinaryTreeSize(bt));
	printf("BinaryTreeLeafSize:%d\n", BinaryTreeLeafSize(bt));
	printf("BinaryTreeLevelKSize:%d\n", BinaryTreeLevelKSize(bt, 4));

	BTNode* tmp = BinaryTreeFind(bt, 'E');
	printf("%c\n", tmp->data);

	BinaryTreePrevOrder(bt);
	printf("\n");
	BinaryTreeInOrder(bt);
	printf("\n");
	BinaryTreePostOrder(bt);
	printf("\n");

	printf("%d\n", BinaryTreeComplete(bt));

	BinaryTreeLevelOrder(bt);

	BinaryTreeDestroy(&bt);
}

int main()
{
	BTTest1();

	return 0;
}
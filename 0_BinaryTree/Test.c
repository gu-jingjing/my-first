#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"


////给定数据的测试用例
//int main()
//{
//	BTNode* root = NULL;
//
//	//插入结点
//	CreateBinaryTree(&root, 9);
//	CreateBinaryTree(&root, 5);
//	CreateBinaryTree(&root, 7);
//	CreateBinaryTree(&root, 8);
//	CreateBinaryTree(&root, 6);
//	CreateBinaryTree(&root, 4);
//
//	////二叉树节点个数
//	printf("二叉树的结点个数：%d\n", BinaryTreeSize(root));
//
//	//二叉树的最大宽度
//	printf("二叉树的最大宽度:%d\n", BinaryTreeWidthMax(root));
//
//	//二叉树叶子结点的个数
//	printf("二叉树叶子结点的个数:%d\n", BinaryTreeLeafSize(root));
//
//	//二叉树第k层节点个数
//	printf("二叉树第k层节点个数:%d\n\n", BinaryTreeLevelKSize(root, 3));
//
//	//前、中、后序遍历
//	printf("二叉树的前序遍历：");
//	PreOrder(root);
//	printf("\n中序遍历：");
//	InOrder(root);
//	printf("\n后序遍历：");
//	PostOrder(root);
//	printf("\n");
//	printf("\n");
//
//	//寻找两个结点的公共祖先
//	BTNode* node = PublicAncestors(root, 6, 8);
//	printf("5和11两个结点的公共祖先:%d\n ", node->data);
//
//	//二叉排序树关键字5的查找长度
//	int lenth = FindBinaryTree(root, 5);
//	printf("二叉排序树关键字5的查找长度:%d\n\n ", lenth);
//
//	//删除数据为5的结点
//	root = DeleteBTNode(root, 5);
//	printf("删除数据为5的结点之后的中序遍历：");
//	InOrder(root);
//	printf("\n");
//
//	//二叉树转换成树
//	TNode* troot = ExchangeToTree(root);
//	printf("二叉树转换成树：\n");
//	ShowTree(troot);
//	printf("\n");
//
//	//树转换成二叉树
//	BTNode* tmproot = ExchangeToBinaryTree(troot);
//	printf("树转换成二叉树（中序遍历）：\n");
//	InOrder(tmproot);
//	printf("\n");
//	DestroyBTree(tmproot);
//
//	DestroyBTree(root);
//	int flag = 1;
//	while (flag)
//	{
//		printf("输入0 以退出:\n");
//		scanf("%d", &flag);
//	}
//	return 0;
//}

//可输入数据的测试用例
int main()
{
	BTNode* root = NULL;
	int x = 0;
	int k = 0;
	printf("请输入需要创建的结点的个数：");
	scanf("%d", &k);
	printf("请输入%d个数据（以空格分隔）:",k);
	while (k--)
	{
		scanf("%d", &x);
		CreateBinaryTree(&root, x);
	}

	//二叉树节点个数
	printf("二叉树的结点个数：%d\n", BinaryTreeSize(root));

	//二叉树的最大宽度
	printf("二叉树的最大宽度:%d\n", BinaryTreeWidthMax(root));

	//二叉树叶子结点的个数
	printf("二叉树叶子结点的个数:%d\n", BinaryTreeLeafSize(root));

	//二叉树第k层节点个数
	printf("二叉树第k层节点个数:%d\n\n", BinaryTreeLevelKSize(root, 3));

	//前、中、后序遍历
	printf("二叉树的前序遍历：");
	PreOrder(root);
	printf("\n中序遍历：");
	InOrder(root);
	printf("\n后序遍历：");
	PostOrder(root);
	printf("\n");
	printf("\n");

	//寻找两个结点的公共祖先
	int a = 0;
	int b = 0;
	printf("寻找两个结点的公共祖先:请输入a,b的值：");
	scanf("%d %d", &a, &b);
	BTNode* node = PublicAncestors(root, a, b);
	printf("a和b两个结点的公共祖先:%d\n ", node->data);

	//二叉排序树关键字key的查找长度
	int key = 0;
	printf("二叉排序树关键字key的查找长度：请输入key的值：");
	scanf("%d", &key);
	int lenth = FindBinaryTree(root, key);
	printf("二叉排序树关键字5的查找长度:%d\n\n ", lenth);

	//删除数据为5的结点
	printf("请输入需要删除的结点：");
	scanf("%d", &key);
	root = DeleteBTNode(root, key);
	printf("删除数据为key的结点之后的中序遍历：");
	InOrder(root);
	printf("\n");

	//二叉树转换成树
	TNode* troot = ExchangeToTree(root);
	printf("二叉树转换成树：\n");
	ShowTree(troot);
	printf("\n");

	//树转换成二叉树
	BTNode* tmproot = ExchangeToBinaryTree(troot);
	printf("树转换成二叉树（中序遍历）：");
	InOrder(tmproot);
	printf("\n");
	DestroyBTree(tmproot);

	DestroyBTree(root);
	int flag = 1;
	while (flag)
	{
		printf("输入0 以退出:\n");
		scanf("%d", &flag);
	}
	return 0;
}

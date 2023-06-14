#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int BTDataType;
typedef int TDataType;

//二叉树
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

//树
typedef struct TreeNode
{
	struct TreeNode* leftchild; //左孩子
	struct TreeNode* rightbrother; //右兄弟
	TDataType data;
}TNode;

//初始化
void InitBinaryTree(BTNode** root);
//二叉排序树插入结点
void CreateBinaryTree(BTNode** root, BTDataType x);

//二叉排序树关键字key的查找长度
int FindBinaryTree(BTNode* root, BTDataType key);

//二叉排序树中，打印a,b两个结点的公共祖先
BTNode* PublicAncestors(BTNode* root, BTNode* a, BTNode* b);

//二叉树前序遍历
void PreOrder(BTNode* root);

//二叉树中序遍历
void InOrder(BTNode* root);

//二叉树后序遍历
void PostOrder(BTNode* root);

//二叉树节点个数
//void BinaryTreeSize(BTNode* root,int* pn);
int BinaryTreeSize(BTNode* root);

//二叉树叶子结点的个数
int BinaryTreeLeafSize(BTNode* root);

//二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k);

//二叉树深度/高度
int BinaryTreeDepth(BTNode* root);

//二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);

////交换二叉树每个结点的左孩子和右孩子
//void ExchangeLRChild(BTNode** root);

//计算二叉树的最大宽度
int BinaryTreeWidthMax(BTNode* root);

//二叉树与树的相互转换
//二叉树转换成树
TNode* ExchangeToTree(BTNode* root);

//树转换成二叉树
TNode* ExchangeToBinaryTree(TNode* troot);

//打印树
void ShowTree(TNode* troot);

//查找二叉排序树中的最小值结点
BTNode* FindMin(BTNode* root);

//二叉树删除结点
BTNode* DeleteBTNode(BTNode* root, BTDataType data);

// 销毁二叉树，释放空间
void DestroyBTree(BTNode* root);
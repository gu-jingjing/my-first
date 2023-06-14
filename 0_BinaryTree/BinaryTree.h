#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int BTDataType;
typedef int TDataType;

//������
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

//��
typedef struct TreeNode
{
	struct TreeNode* leftchild; //����
	struct TreeNode* rightbrother; //���ֵ�
	TDataType data;
}TNode;

//��ʼ��
void InitBinaryTree(BTNode** root);
//����������������
void CreateBinaryTree(BTNode** root, BTDataType x);

//�����������ؼ���key�Ĳ��ҳ���
int FindBinaryTree(BTNode* root, BTDataType key);

//�����������У���ӡa,b�������Ĺ�������
BTNode* PublicAncestors(BTNode* root, BTNode* a, BTNode* b);

//������ǰ�����
void PreOrder(BTNode* root);

//�������������
void InOrder(BTNode* root);

//�������������
void PostOrder(BTNode* root);

//�������ڵ����
//void BinaryTreeSize(BTNode* root,int* pn);
int BinaryTreeSize(BTNode* root);

//������Ҷ�ӽ��ĸ���
int BinaryTreeLeafSize(BTNode* root);

//��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k);

//���������/�߶�
int BinaryTreeDepth(BTNode* root);

//����������ֵΪx�Ľڵ�
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);

////����������ÿ���������Ӻ��Һ���
//void ExchangeLRChild(BTNode** root);

//����������������
int BinaryTreeWidthMax(BTNode* root);

//�������������໥ת��
//������ת������
TNode* ExchangeToTree(BTNode* root);

//��ת���ɶ�����
TNode* ExchangeToBinaryTree(TNode* troot);

//��ӡ��
void ShowTree(TNode* troot);

//���Ҷ����������е���Сֵ���
BTNode* FindMin(BTNode* root);

//������ɾ�����
BTNode* DeleteBTNode(BTNode* root, BTDataType data);

// ���ٶ��������ͷſռ�
void DestroyBTree(BTNode* root);
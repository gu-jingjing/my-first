#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"


////�������ݵĲ�������
//int main()
//{
//	BTNode* root = NULL;
//
//	//������
//	CreateBinaryTree(&root, 9);
//	CreateBinaryTree(&root, 5);
//	CreateBinaryTree(&root, 7);
//	CreateBinaryTree(&root, 8);
//	CreateBinaryTree(&root, 6);
//	CreateBinaryTree(&root, 4);
//
//	////�������ڵ����
//	printf("�������Ľ�������%d\n", BinaryTreeSize(root));
//
//	//�������������
//	printf("�������������:%d\n", BinaryTreeWidthMax(root));
//
//	//������Ҷ�ӽ��ĸ���
//	printf("������Ҷ�ӽ��ĸ���:%d\n", BinaryTreeLeafSize(root));
//
//	//��������k��ڵ����
//	printf("��������k��ڵ����:%d\n\n", BinaryTreeLevelKSize(root, 3));
//
//	//ǰ���С��������
//	printf("��������ǰ�������");
//	PreOrder(root);
//	printf("\n���������");
//	InOrder(root);
//	printf("\n���������");
//	PostOrder(root);
//	printf("\n");
//	printf("\n");
//
//	//Ѱ���������Ĺ�������
//	BTNode* node = PublicAncestors(root, 6, 8);
//	printf("5��11�������Ĺ�������:%d\n ", node->data);
//
//	//�����������ؼ���5�Ĳ��ҳ���
//	int lenth = FindBinaryTree(root, 5);
//	printf("�����������ؼ���5�Ĳ��ҳ���:%d\n\n ", lenth);
//
//	//ɾ������Ϊ5�Ľ��
//	root = DeleteBTNode(root, 5);
//	printf("ɾ������Ϊ5�Ľ��֮������������");
//	InOrder(root);
//	printf("\n");
//
//	//������ת������
//	TNode* troot = ExchangeToTree(root);
//	printf("������ת��������\n");
//	ShowTree(troot);
//	printf("\n");
//
//	//��ת���ɶ�����
//	BTNode* tmproot = ExchangeToBinaryTree(troot);
//	printf("��ת���ɶ������������������\n");
//	InOrder(tmproot);
//	printf("\n");
//	DestroyBTree(tmproot);
//
//	DestroyBTree(root);
//	int flag = 1;
//	while (flag)
//	{
//		printf("����0 ���˳�:\n");
//		scanf("%d", &flag);
//	}
//	return 0;
//}

//���������ݵĲ�������
int main()
{
	BTNode* root = NULL;
	int x = 0;
	int k = 0;
	printf("��������Ҫ�����Ľ��ĸ�����");
	scanf("%d", &k);
	printf("������%d�����ݣ��Կո�ָ���:",k);
	while (k--)
	{
		scanf("%d", &x);
		CreateBinaryTree(&root, x);
	}

	//�������ڵ����
	printf("�������Ľ�������%d\n", BinaryTreeSize(root));

	//�������������
	printf("�������������:%d\n", BinaryTreeWidthMax(root));

	//������Ҷ�ӽ��ĸ���
	printf("������Ҷ�ӽ��ĸ���:%d\n", BinaryTreeLeafSize(root));

	//��������k��ڵ����
	printf("��������k��ڵ����:%d\n\n", BinaryTreeLevelKSize(root, 3));

	//ǰ���С��������
	printf("��������ǰ�������");
	PreOrder(root);
	printf("\n���������");
	InOrder(root);
	printf("\n���������");
	PostOrder(root);
	printf("\n");
	printf("\n");

	//Ѱ���������Ĺ�������
	int a = 0;
	int b = 0;
	printf("Ѱ���������Ĺ�������:������a,b��ֵ��");
	scanf("%d %d", &a, &b);
	BTNode* node = PublicAncestors(root, a, b);
	printf("a��b�������Ĺ�������:%d\n ", node->data);

	//�����������ؼ���key�Ĳ��ҳ���
	int key = 0;
	printf("�����������ؼ���key�Ĳ��ҳ��ȣ�������key��ֵ��");
	scanf("%d", &key);
	int lenth = FindBinaryTree(root, key);
	printf("�����������ؼ���5�Ĳ��ҳ���:%d\n\n ", lenth);

	//ɾ������Ϊ5�Ľ��
	printf("��������Ҫɾ���Ľ�㣺");
	scanf("%d", &key);
	root = DeleteBTNode(root, key);
	printf("ɾ������Ϊkey�Ľ��֮������������");
	InOrder(root);
	printf("\n");

	//������ת������
	TNode* troot = ExchangeToTree(root);
	printf("������ת��������\n");
	ShowTree(troot);
	printf("\n");

	//��ת���ɶ�����
	BTNode* tmproot = ExchangeToBinaryTree(troot);
	printf("��ת���ɶ������������������");
	InOrder(tmproot);
	printf("\n");
	DestroyBTree(tmproot);

	DestroyBTree(root);
	int flag = 1;
	while (flag)
	{
		printf("����0 ���˳�:\n");
		scanf("%d", &flag);
	}
	return 0;
}

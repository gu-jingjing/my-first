#define _CRT_SECURE_NO_WARNINGS 1

#include"BinaryTree.h"

BTNode* BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		printf("malloc failed\n");
		exit(-1);
	}
	node->data = x;
	node->left = node->right = NULL;
	return node;
}
//
//BTNode* CreateBinaryTree()
//{
//	BTNode* nodeA = BuyNode('A');
//	BTNode* nodeB = BuyNode('B');
//	BTNode* nodeC = BuyNode('C');
//	BTNode* nodeD = BuyNode('D');
//	BTNode* nodeE = BuyNode('E');
//	BTNode* nodeF = BuyNode('F');
//	
//	nodeA->left = nodeB;
//	nodeA->right = nodeC;
//	nodeB->left = nodeD;
//	nodeC->left = nodeE;
//	nodeC->right = nodeF;
//
//	return nodeA;
//}

//����������
//��ʼ��
void InitBinaryTree(BTNode** root)
{
	*root = NULL;
}

//����������������
void CreateBinaryTree(BTNode** root, BTDataType x)
{
	//�ߵ��ս�㣬������
	if ((*root) == NULL)
	{
		(*root) = (BTNode*)malloc(sizeof(BTNode));
		(*root)->data = x;
		(*root)->left = NULL;
		(*root)->right = NULL;
		return;
	}

	//���и����ݣ�������
	if (x == (*root)->data)
	{
		printf("���и�����\n");
		return;
	}
	//С�ڸý������ݣ���������
	else if(x < (*root)->data)
	{
		CreateBinaryTree(&((*root)->left), x);
	}
	//���ڸý������ݣ���������
	else 
	{
		CreateBinaryTree(&((*root)->right), x);
	}
}

//�����������ؼ���key�Ĳ��ҳ���
int FindBinaryTree(BTNode* root, BTDataType key)
{
	//�ߵ��գ�����
	if (root == NULL)
	{
		return;
	}
	//���ҵ�key�������+1
	if (root->data == key)
	{
		return 1;
	}
	//�ݹ����
	if (key < root->data)
	{
		return FindBinaryTree(root->left, key) + 1;
	}
	if (key > root->data)
	{
		return FindBinaryTree(root->right, key) + 1;
	}
}

//�����������У���ӡa,b�������Ĺ�������
BTNode* PublicAncestors(BTNode* root, BTDataType a, BTDataType b)
{
	if (root == NULL)
	{
		return NULL;
	}
	//a,b����root��������
	if (a < root->data && b < root->data)
	{
		return PublicAncestors(root->left, a, b);
	}
	//a,b����root��������
	if (a > root->data && b > root->data)
	{
		return PublicAncestors(root->right, a, b);
	}
	//a��b�ֱ���root������������˵��root����a,b�����Ƚ��
	else
	{
		return root;
	}
}

//������ǰ�����
void PreOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	printf("%d ", root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}

//�������������
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

//�������������
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->data);
}


//�������ڵ����
int BinaryTreeSize(BTNode* root)
{
	//���Ϊ���򷵻�0�����򷵻ؽ�����������������������������������1����㱾����1����
	return root == NULL ? 0 : BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}

//������Ҷ�ӽ��ĸ���
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	//��Ҷ�ӽ���򷵻�1�����򷵻ؽ�����������Ҷ�ӽ�����+������������Ҷ�ӽ�����
	return (root->left == NULL && root->right == NULL) ? 1 : 
		BinaryTreeLeafSize(root->left)
		+ BinaryTreeLeafSize(root->right);
}

//��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	assert(k > 0);
	if (root == NULL)
	{
		return 0;
	}

	if (k == 1)
	{
		return 1;
	}
	
	return BinaryTreeLevelKSize(root->left, k - 1) + BinaryTreeLevelKSize(root->right, k - 1);
	
}

//���������/�߶�
int BinaryTreeDepth(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int leftDepth = BinaryTreeDepth(root->left);
	int rightDepth = BinaryTreeDepth(root->right);

	return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
}

//����������ֵΪx�Ľڵ�
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}

	if (root->data == x)
	{
		return root;
	}

	BTNode* leftRet = BinaryTreeFind(root->left, x);
	if (leftRet)
	{
		return leftRet;
	}
	BTNode* rightRet = BinaryTreeFind(root->right, x);
	if (rightRet)
	{
		return rightRet;
	}

	return NULL;
}

////����������ÿ���������Ӻ��Һ���
////һ�ν���
//void ExchangeOnce(BTNode** root)
//{
//	BTNode* tmp = (*root)->left;
//	(*root)->left = (*root)->right;
//	(*root)->right = tmp;
//}
//void ExchangeLRChild(BTNode** root)
//{
//	assert(root);
//	if ((*root)->left == NULL && (*root)->right == NULL)
//	{
//		return;
//	}
//	else
//	{
//		ExchangeOnce(root);
//	}
//	return ExchangeLRChild(&((*root)->left));
//	return ExchangeLRChild(&((*root)->right));
//}

//����������������
int BinaryTreeWidthMax(BTNode* root)
{
	assert(root);
	//��¼�����������
	int depth = BinaryTreeDepth(root);
	int i = 1;
	int max = 1;
	while (i <= depth)
	{
		//���ýӿڣ�tmp Ϊÿ��Ľ����
		int tmp = BinaryTreeLevelKSize(root, i);
		if (tmp > max)
		{
			max = tmp;
		}
		i++;
	}
	return max;
}

//�������������໥ת��
//������ת������
TNode* ExchangeToTree(BTNode* root)
{
	if (root == NULL)
	{
		return NULL;
	}
	else
	{
		TNode* troot = (TNode*)malloc(sizeof(TNode));
		troot->data = root->data;
		troot->leftchild = ExchangeToTree(root->left);
		troot->rightbrother = ExchangeToTree(root->right);
		return troot;
	}
}

//��ת���ɶ�����
TNode* ExchangeToBinaryTree(TNode* troot)
{
	if (troot == NULL)
	{
		return NULL;
	}
	else
	{
		BTNode* root = (BTNode*)malloc(sizeof(BTNode));
		root->data = troot->data;
		root->left = ExchangeToBinaryTree(troot->leftchild);
		root->right = ExchangeToBinaryTree(troot->rightbrother);

		return root;
	}

}

//��ӡ��
void ShowTree(TNode* troot)
{
	TNode* child = troot->leftchild;
	int flag = 1; //���ñ��
	while (flag)
	{
		flag = 0;
		while (troot)
		{
			printf("%d ", troot->data);
			if (troot->leftchild)
			{
				flag = 1;
				child = troot->leftchild; //�����һ��ĵ�һ�����
				//��û����һ���㣬��flagΪ0���˳�ѭ��
			}
			troot = troot->rightbrother;
		}
		printf("\n");
		troot = child;
	}
	printf("\n");
}

//���Ҷ����������е���Сֵ���
BTNode* FindMin(BTNode* root) 
{
	if (root == NULL) 
	{
		return NULL;
	}
	else if (root->left == NULL) 
	{
		return root;
	}
	else 
	{
		return FindMin(root->left);
	}
}


//������ɾ�����
BTNode* DeleteBTNode(BTNode* root, BTDataType data)
{
	//���Ҹý��
	if (root == NULL) 
	{
		return NULL;
	}
	else if (data < root->data)
	{
		root->left = DeleteBTNode(root->left, data);
	}
	else if (data > root->data) 
	{
		root->right = DeleteBTNode(root->right, data);
	}
	else 
	{
		//�ҵ�Ҫɾ���Ľ��
		if (root->left == NULL && root->right == NULL) 
		{
			//���1��Ҫɾ���Ľ����Ҷ�ӽ��
			free(root);
			root = NULL;
		}
		else if (root->left == NULL) 
		{
			//���2��Ҫɾ���Ľ��ֻ��������
			BTNode* temp = root;
			root = root->right;
			free(temp);
		}
		else if (root->right == NULL) 
		{
			//���3��Ҫɾ���Ľ��ֻ��������
			BTNode* temp = root;
			root = root->left;
			free(temp);
		}
		else 
		{
			//���4��Ҫɾ���Ľ���������������������
			BTNode* temp = FindMin(root->right);
			root->data = temp->data;
			root->right = DeleteBTNode(root->right, temp->data);
		}
	}
	return root;
}

// ���ٶ��������ͷſռ�
void DestroyBTree(BTNode* root) 
{
	if (root == NULL) 
	{
		return;
	}
	DestroyBTree(root->left);
	DestroyBTree(root->right);
	free(root);
}
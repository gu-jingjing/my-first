#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"
#include"Queue.h"

BTNode* BuyNode(BTDataType x)
{
	BTNode* newnode = (BTNode*)malloc(sizeof(BTNode));
	if (newnode == NULL)
	{
		printf("malloc failed\n");
		return;
	}

	newnode->data = x;
	newnode->left = newnode->right = NULL;
	return newnode;
}

// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
BTNode* BinaryTreeCreate()
{
	BTNode* A = BuyNode('A');
	BTNode* B = BuyNode('B');
	BTNode* C = BuyNode('C');
	BTNode* D = BuyNode('D');
	BTNode* E = BuyNode('E');
	BTNode* F = BuyNode('F');
	BTNode* G = BuyNode('G');
	BTNode* H = BuyNode('H');

	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;
	C->left = F;
	C->right = G;
	E->right = H;

	return A;
}

// ����������
void BinaryTreeDestroy(BTNode** root)
{
	assert(root);
	if ((*root) == NULL)
	{
		return;
	}

	if ((*root)->left == NULL && (*root)->right == NULL)
	{
		free(*root);
		*root = NULL;

		return;
	}
	else
	{
		BinaryTreeDestroy(&((*root)->left));
		BinaryTreeDestroy(&((*root)->right));

	}

	free(*root);
	*root = NULL;
}

// �������ڵ����
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	return 1 + BinaryTreeSize(root->left) + BinaryTreeSize(root->right);
}

// ������Ҷ�ӽڵ����
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}


	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);

}

// ��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
	{
		return 0;
	}

	if (k == 1)
	{
		return 1;
	}

	return BinaryTreeLevelKSize(root->left, k-1) + BinaryTreeLevelKSize(root->right, k-1);
}

// ����������ֵΪx�Ľڵ�
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

	BTNode* rootleft = BinaryTreeFind(root->left, x);

	if (rootleft != NULL)
	{
		return rootleft;
	}

	BTNode* rootright = BinaryTreeFind(root->right, x);

	if (rootright != NULL)
	{
		return rootright;
	}

	return	NULL;
}

// ������ǰ����� 
void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL  ");
		return;
	}

	printf("%c  ", root->data);

	 BinaryTreePrevOrder(root->left);
	 BinaryTreePrevOrder(root->right);
}

// �������������
void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL  ");
		return;
	}

	BinaryTreeInOrder(root->left);
	printf("%c  ", root->data);
	BinaryTreeInOrder(root->right);
}

// �������������
void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL  ");
		return;
	}

	BinaryTreePostOrder(root->left);
	BinaryTreePostOrder(root->right);

	printf("%c  ", root->data);
}

// �������
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);

	if (root == NULL)
	{
		return;
	}

	QueuePush(&q, root);

	while (!QueueEmpty(&q))
	{
		BTNode* tmp = QueueFront(&q);
		printf("%c  ", tmp->data);
		
		if (tmp->left)
		{
			QueuePush(&q, tmp->left);
		}
		if (tmp->right)
		{
			QueuePush(&q, tmp->right);
		}
		QueuePop(&q);
	}
}

// �ж϶������Ƿ�����������
int BinaryTreeFull(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	else if (root->left != NULL && root->right != NULL)
	{
		int left = BinaryTreeComplete(root->left);
		int right = BinaryTreeComplete(root->right);

		if (left && right)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}


}


// �ж϶������Ƿ�����ȫ������
int BinaryTreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);

	if (root)
	{
		QueuePush(&q, root);
	}

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);

		if (front == NULL)
		{
			break;
		}

		QueuePush(&q, front->left);
		QueuePush(&q, front->right);
	}

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);

		if (front)
		{
			return false;
		}
	}

	return true;
}
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

//二叉排序树
//初始化
void InitBinaryTree(BTNode** root)
{
	*root = NULL;
}

//二叉排序树插入结点
void CreateBinaryTree(BTNode** root, BTDataType x)
{
	//走到空结点，即插入
	if ((*root) == NULL)
	{
		(*root) = (BTNode*)malloc(sizeof(BTNode));
		(*root)->data = x;
		(*root)->left = NULL;
		(*root)->right = NULL;
		return;
	}

	//已有该数据，即返回
	if (x == (*root)->data)
	{
		printf("已有该数据\n");
		return;
	}
	//小于该结点的数据，则往左走
	else if(x < (*root)->data)
	{
		CreateBinaryTree(&((*root)->left), x);
	}
	//大于该结点的数据，则往右走
	else 
	{
		CreateBinaryTree(&((*root)->right), x);
	}
}

//二叉排序树关键字key的查找长度
int FindBinaryTree(BTNode* root, BTDataType key)
{
	//走到空，返回
	if (root == NULL)
	{
		return;
	}
	//查找到key，则计数+1
	if (root->data == key)
	{
		return 1;
	}
	//递归查找
	if (key < root->data)
	{
		return FindBinaryTree(root->left, key) + 1;
	}
	if (key > root->data)
	{
		return FindBinaryTree(root->right, key) + 1;
	}
}

//二叉排序树中，打印a,b两个结点的公共祖先
BTNode* PublicAncestors(BTNode* root, BTDataType a, BTDataType b)
{
	if (root == NULL)
	{
		return NULL;
	}
	//a,b都在root的左子树
	if (a < root->data && b < root->data)
	{
		return PublicAncestors(root->left, a, b);
	}
	//a,b都在root的右子树
	if (a > root->data && b > root->data)
	{
		return PublicAncestors(root->right, a, b);
	}
	//a，b分别在root的左右子树，说明root就是a,b的祖先结点
	else
	{
		return root;
	}
}

//二叉树前序遍历
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

//二叉树中序遍历
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

//二叉树后序遍历
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


//二叉树节点个数
int BinaryTreeSize(BTNode* root)
{
	//结点为空则返回0，否则返回结点的左子树结点个数＋结点的右子树结点个数＋1（结点本身是1个）
	return root == NULL ? 0 : BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}

//二叉树叶子结点的个数
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	//是叶子结点则返回1，否则返回结点的左子树的叶子结点个数+结点的右子树的叶子结点个数
	return (root->left == NULL && root->right == NULL) ? 1 : 
		BinaryTreeLeafSize(root->left)
		+ BinaryTreeLeafSize(root->right);
}

//二叉树第k层节点个数
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

//二叉树深度/高度
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

//二叉树查找值为x的节点
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

////交换二叉树每个结点的左孩子和右孩子
////一次交换
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

//计算二叉树的最大宽度
int BinaryTreeWidthMax(BTNode* root)
{
	assert(root);
	//记录二叉树的深度
	int depth = BinaryTreeDepth(root);
	int i = 1;
	int max = 1;
	while (i <= depth)
	{
		//复用接口，tmp 为每层的结点数
		int tmp = BinaryTreeLevelKSize(root, i);
		if (tmp > max)
		{
			max = tmp;
		}
		i++;
	}
	return max;
}

//二叉树与树的相互转换
//二叉树转换成树
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

//树转换成二叉树
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

//打印树
void ShowTree(TNode* troot)
{
	TNode* child = troot->leftchild;
	int flag = 1; //设置标记
	while (flag)
	{
		flag = 0;
		while (troot)
		{
			printf("%d ", troot->data);
			if (troot->leftchild)
			{
				flag = 1;
				child = troot->leftchild; //标记下一层的第一个结点
				//若没有下一层结点，则flag为0，退出循环
			}
			troot = troot->rightbrother;
		}
		printf("\n");
		troot = child;
	}
	printf("\n");
}

//查找二叉排序树中的最小值结点
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


//二叉树删除结点
BTNode* DeleteBTNode(BTNode* root, BTDataType data)
{
	//查找该结点
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
		//找到要删除的结点
		if (root->left == NULL && root->right == NULL) 
		{
			//情况1：要删除的结点是叶子结点
			free(root);
			root = NULL;
		}
		else if (root->left == NULL) 
		{
			//情况2：要删除的结点只有右子树
			BTNode* temp = root;
			root = root->right;
			free(temp);
		}
		else if (root->right == NULL) 
		{
			//情况3：要删除的结点只有左子树
			BTNode* temp = root;
			root = root->left;
			free(temp);
		}
		else 
		{
			//情况4：要删除的结点既有左子树又有右子树
			BTNode* temp = FindMin(root->right);
			root->data = temp->data;
			root->right = DeleteBTNode(root->right, temp->data);
		}
	}
	return root;
}

// 销毁二叉树，释放空间
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
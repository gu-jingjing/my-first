#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;



//new��̬����Ķ�������ռ�+���ù��캯����ʼ��
//delete�ͷŶ���ʱ�������������������������Դ���ͷſռ�

struct ListNode
{
	ListNode* _next;
	ListNode* _prev;
	int _val;

	ListNode(int val)
		:_next(nullptr)
		, _prev(nullptr)
		, _val(val)
	{}

};

//int main()
//{
//	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	n1->_next = nullptr;
//	n1->_prev = nullptr;
//	n1->_val = 0;
//
//	ListNode* n2 = new ListNode(0);
//
//	return 0;
//}

class Stack
{
public:
	Stack(int capacity = 4)
		:_top(0)
		,_capacity(capacity)
	{
		_a = new int[capacity];

	}

	~Stack()
	{
		delete[] _a;
		_a = nullptr;
		_capacity = _top = 0;
	}

private:
	int* _a;
	int _top;
	int _capacity;
};

//int main()
//{
//	Stack st;
//
//	Stack* pst2 = new Stack;//���ռ�+���캯����ʼ��
//	delete pst2;
//
//	return 0;
//}

//����ģ��
template<class T> //ģ������б�
void Swap(T& x1, T& x2)
{
	T x = x1;
	x1 = x2;
	x2 = x;
}

int main()
{
	int a = 0, b = 1;
	double c = 1.1, d = 2.2;

	printf("%d %d\n", a, b);
	printf("%.1f %.1f\n", c, d);

	Swap(a, b);
	Swap(c, d);

	printf("%d %d\n", a, b);
	printf("%.1f %.1f\n", c, d);
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;



//new动态申请的对象，申请空间+调用构造函数初始化
//delete释放对象时，调用析构函数清理对象中资源，释放空间

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
//	Stack* pst2 = new Stack;//开空间+构造函数初始化
//	delete pst2;
//
//	return 0;
//}

//函数模板
template<class T> //模板参数列表
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
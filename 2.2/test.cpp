#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

////thisָ��
////���ó�Ա����ʱ��������ʾ��ʵ�θ�this
////�����Ա����ʱ��Ҳ������ʾ�����β�this
////�ڳ�Ա�����ڲ���������ʾʹ��this
//
//class Date
//{
//public:
//	//void Init(Date* const this, int year, int month, int day)
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		//Date::year = year;
//		//this ָ�벻�ɱ��ı�
//		this->_month = month; // ����Ϳ���ʹ��this
//		//һ������£����Ƕ�������ʾд
//		_day = day;
//	}
//
//	//void Print(Date* const this)
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//		//cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//
//	}
//	
//		
//	
//private:
//	int _year;
//	int _month;
//	int _day;
//
//
//};
//
//int main()
//{
//	Date d1;
//	d1.Init(2023, 2, 1);
//
//	//���ص�thisָ��   void Print(Date* this)
//	//d1.Print(&d1)
//	d1.Print();
//
//	Date d2;
//	d2.Init(2023, 2, 2);
//	d2.Print();
//
//	return 0;
//}
//
////������ֻ�г�Ա����
////this һ��������Ǵ��� ջ ���βΣ�
////��Щ������ ��ŵ��Ĵ����У���VS2013��VS2019���� ����ecx��
//


//6��Ĭ�ϳ�Ա������������ĳ�Ա������ ������ǲ�ʵ�֣����������Լ�����һ��
//��ʼ�������� 1. ���캯����Ҫ��ɳ�ʼ������(����init)  2.����������Ҫ���������(����destroy)
//�������ƣ�     1. ����������ʹ��ͬ������ʼ����������  2.��ֵ������Ҫ�ǰ�һ������ֵ����һ������
//ȡ��ַ����     ��Ҫ����ͨ�����const����ȡ��ַ�����������ٻ��Լ�ʵ��

//���캯��������
//1.��������������ͬ  2.�޷���ֵ  3.����ʵ����ʱ������  �Զ�����  ��Ӧ�Ĺ��캯��  4.���캯����������

class Date
{
public:
	//Date(int year, int month, int day)
	//{
	//	_year = year;
	//	_month = month;
	//	_day = day;
	//}
	//Date()
	//{
	//	_year = 0;
	//	_month = 1;
	//	_day = 1;
	//}

	//�Ƽ�ʵ��ȫȱʡ���߰�ȱʡ����Ϊ�ȽϺ���
	Date(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}


private:
	int _year;
	int _month;
	int _day;
};

//int main()
//{
//	Date d1;
//
//	Date d2(2023, 2, 1);
//	
//	return 0;
//}

class Score
{
public:
	Score(int Chinese = 0, int math = 0, int English = 0)
	{
		_Chinese = Chinese;
		_math = math;
		_English = English;
	}

	~Score()
	{
		//Score��û����Դ��Ҫ��������Score��ʵ����������Ҳ�ǿ��Ե�
	}

	//Score(const Score& d)
	//{
	//	_Chinese = d._Chinese;
	//	_math = d._math;
	//	_English = d._English;
	//}

private:
	int _Chinese;
	int _math;
	int _English;
};

class Stack
{
public:
	Stack(int capacity = 4)
	{
		_a = (int*)malloc(sizeof(int) * capacity);
		if (_a == nullptr)
		{
			cout << "malloc fail\n" << endl;
			exit(-1);
		}
		_top = 0;
		_capacity = capacity;
	}

	~Stack()
	{
		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}

private:
	int* _a;
	size_t _top;
	size_t _capacity;
};
//
//int main()
//{
//	Score sc1;
//	Score sc2;
//
//	Stack s1;
//	Stack s2(10);
//
//	return 0;
//}

int main()
{
	Score s1(99, 100, 99);
	Score s2(s1); // ��������

	return 0;
}
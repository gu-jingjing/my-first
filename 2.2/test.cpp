#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

////this指针
////调用成员函数时，不能显示传实参给this
////定义成员函数时，也不能显示声明形参this
////在成员函数内部，可以显示使用this
//
//class Date
//{
//public:
//	//void Init(Date* const this, int year, int month, int day)
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		//Date::year = year;
//		//this 指针不可被改变
//		this->_month = month; // 这里就可以使用this
//		//一般情况下，我们都不会显示写
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
//	//隐藏的this指针   void Print(Date* this)
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
////对象里只有成员变量
////this 一般情况下是存在 栈 （形参）
////有些编译器 会放到寄存器中，如VS2013，VS2019，是 放在ecx中
//


//6个默认成员函数：（特殊的成员函数） 如果我们不实现，编译器会自己生成一份
//初始化和清理： 1. 构造函数主要完成初始化工作(类似init)  2.析构函数主要完成清理工作(类似destroy)
//拷贝复制：     1. 拷贝构造是使用同类对象初始化创建对象  2.赋值重载主要是把一个对象赋值给另一个对象
//取地址重载     主要是普通对象和const对象取地址，这两个很少会自己实现

//构造函数特征：
//1.函数名与类名相同  2.无返回值  3.对象实例化时编译器  自动调用  对应的构造函数  4.构造函数可以重载

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

	//推荐实现全缺省或者半缺省，因为比较好用
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
		//Score类没有资源需要清理，所以Score不实现析构函数也是可以的
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
	Score s2(s1); // 拷贝复制

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<map>
#include<string>

using namespace std;

//int main()
//{
//	//cin  -  流提取运算符
//	//cout -  流插入运算符
//
//	//引用的底层原理
//	//看汇编
//
//	//auto关键字(C++11) (2011年）
//	int b = 100;
//	//自动推导a的类型
//	auto a = &b;
//	auto c = "abc";  //char const * 类型
//	auto d = 99.5;
//	auto e = 'a';
//
//	cout << typeid(c).name() << endl;   //可以打印对象的类型
//	cout << typeid(a).name() << endl;   //可以打印对象的类型
//	cout << typeid(d).name() << endl;   //可以打印对象的类型
//	cout << typeid(e).name() << endl;   //可以打印对象的类型
//
//
//	//auto实际中的用法：
//	std::map<std::string, std::string> dict = { {"sort","排序"},{"insert","插入"} };
//	//std::map<std::string, std::string>::iterator it = dict.begin();
//
//	//根据右边的值自动推导 it 的类型
//	auto it = dict.begin();
//
//	int x = 100;
//	auto aa = &x; //int*
//	auto* bb = &x; //int*
//	auto& cc = x;  //int
//
//	cout << typeid(aa).name() << endl;
//	cout << typeid(bb).name() << endl;
//	cout << typeid(cc).name() << endl;
//
//	auto const y = x;
//	
//	//auto  不能作为形参类型，因为编译器无法对 其 的实际类型进行推导
//	//auto  也不能定义数组
//
//	//语法糖 -- 范围for
//	int arr[] = { 1,3,5,7,9 };
//
//
//	//C++11范围for
//	//自动取数组arr中的每个元素赋值给e
//	//自动判断结束
//	for (auto e : arr)
//	{
//		cout << e << endl;
//	}
//	//这个名字任取
//	for (auto m : arr)
//	{
//		cout << m << endl;
//	}
//
//	//范围for  -  把数组中的每个值+1
//	for (auto& e : arr)
//	{
//		e++;
//		cout << e << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	//初始化空指针
//
//	//C++98/=3
//	int* p1 = NULL;
//	int* p2 = 0;
//
//	//C++11
//	//推荐下面这种写法
//	int* p3 = nullptr;
//
//	return 0;
//}

//C++中定义类：  struct/class
//C++兼容C里面结构体的用法
//同时struct 在C++中也升级成了类


//struct Student
//{
//	//成员变量
//	char name[100];
//	int age;
//	int id;
//
//};
//
//
//int main()
//{
//	struct Student s1;//兼容C
//	Student s2;//升级到类，Student类名，也是类型
//
//	strcpy(s1.name, "王五");
//	s1.id = 1;
//	s1.age = 17;
//
//	strcpy(s2.name, "赵老三");
//	s2.id = 2;
//	s2.age = 16;
//
//	return 0;
//}

//C++类 和结构体不同  是 除了可以定义变量 ，还可以定义方法（函数）
//struct Student
//{
//	//成员变量
//	char _name[100];
//	int _age;
//	int _id;
//
//	//成员方法
//	void Init(const char* name, int age, int id)
//	{
//		strcpy(_name, name);
//		_age = age;
//		_id = id;
//	}
//
//	void Print()
//	{
//		cout << _name << endl;
//		cout << _age << endl;
//		cout << _id << endl;
//	}
//};
//
//int main()
//{
//	struct Student s1;
//	Student s2;
//
//	s1.Init("王五", 17, 1);
//	s2.Init("赵老三", 16, 2);
//	s1.Print();
//	s2.Print();
//
//	return 0;
//}


//面向对象编程有三大特性:封装、继承、多态
//封装:
//1.数据和方法都放到了一起，在类里面
//2.访问限定符
//一般在定义类的时候，建议明确定义访问限定符，不要用class/struct默认限定（private/public)

//封装是一种更好的严格管理
//不封装是一种自由管理

//1.数据和方法都封装在类里面
//2.可以给你访问的定义成公有，不想给你访问的定义成私有/保护

 class Student
{
	//成员变量
	char _name[100];
	int _age;
	int _id;

public:
	//成员方法
	void Init(const char* name, int age, int id)
	{
		strcpy(_name, name);
		_age = age;
		_id = id;
	}
//private:
	void Print()
	{
		cout << _name << endl;
		cout << _age << endl;
		cout << _id << endl;
	}
};

int main()
{
	struct Student s1;
	Student s2;

	s1.Init("王五", 17, 1);
	s2.Init("赵老三", 16, 2);
	s1.Print();
	s2.Print();

	return 0;
}

//计算类或类对象大小，只看成员变量，考虑内存对齐，C++内存对齐规则跟C结构一致

//空类会给1byte，这1byte不存储有效数据，只是为了占位，表示对象存在
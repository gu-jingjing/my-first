#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//引用可以修改返回变量

//如果把返回类型改为int ，则会报错。
//因为临时变量具有常性，临时变量是右值，不可修改
int& Arr(int i)
{
	static int arr[100];
	return arr[i];
}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		Arr(i) = i + 100;
//		cout << Arr(i) << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//int main()
//{
//	float x = 100.11;
//
//	//右值：
//	//表达式的返回值、常量通常可以认为是右值
//	//右值不能修改
//
//	//注意，这里不加const会报错，因为x为float类型
//	//会先转换成int类型，产生临时变量，来存储结果，保存到一个临时空间，y就是这个临时空间的别名
//	//实质上是一个右值，不可被修改，所以用const修饰
//	const int& y = x;
//
//	return 0;
//}

//使用引用传参，如果函数中不改变参数的值，建议使用const &

//const Type & 可以接收各种类型的对象

//引用是变量的别名，没开空间，指针是存储地址
//引用必须初始化，指针最好初始化
//引用如果是b的别名之后，不能再成为c的别名。指针指向b之后，也可以改为指向c
//没有NULL引用，但有NULL指针
//sizeof： 引用的结果是引用类型的大小，指针是地址空间所占字节个数
//指针使用起来更复杂，更容易出错


//..就是往上跳一层目录
// 仅做演示，下面文件无法打开。
//#include<../../../../the_first/1.30/Debug/1.30.tlog/>


//extern
//C++程序中，调用C的库   -  在C++程序中加extren "C"
//C程序 ， 调用C++的库   -  在C++库中加 extern "C"


//内联函数
//release 版本不会建立栈帧
//debug 版本也可以修改设置，使其展开，不建立栈帧

//有了inline ，就不需要使用C的宏，因为宏很复杂，很容易出错

//inline是一种  以空间换时间  的做法，省去了栈帧的开销
// 
//长函数（10行以上，但是不同的编译器不同） 或者有递归的函数不适合使用作为内联函数
// 因为调用的地方很多，展开后程序可能会一下变得很大
//
//inline对于编译器而言只是一个建议   ，编译器会自动优化，如果定义为inline的函数很长或者是递归函数等，
//编译器优化时会忽略掉内联
// 
//inline不建议定义和声明分离，分离会导致链接错误，因为inline被展开（在调用的地方），
// 就没有函数地址了，链接就会找不到
//f.cpp -> f.o 符号表中不会生成函数的地址，因为inline函数是不需要地址的
//

inline int Add(int x, int y)
{
	int ret = x + y;
	return ret;
}

//宏
#define ADD(x , y) ((x) + (y))

int Sub(int x, int y)
{
	int ret = x - y;
	return ret;
}

int main()
{
	int ans = ADD(3, 4);
	cout << ans << endl;

	cout << Add(4, 9) << endl;

	return 0;
}
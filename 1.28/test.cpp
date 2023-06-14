//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//
//namespace gujingj
//{
//	//这里定义的变量还是全局变量，放到静态区
//	//命名空间可以定义变量、函数、类型
//	int rand = 0;
//
//	int Sub(int x, int y)
//	{
//		return x - y;
//	}
//
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//
//	namespace N
//	{
//		int m;
//		int n;
//		int Add(int x, int y)
//		{
//			return x + y;
//		}
//	}
//}
//
//int a = 0;
//
////把整个命名空间展开  -  用起来方便，但隔离失效   最好不用
//using namespace gujingj;
//
////可以展开某一个   展开命名空间常用的
//using gujingj::Sub;
//
//int main()
//{
//	gujingj::rand = 100;
//	printf("%d \n", gujingj::rand);//    ::    -    域作用限定符
//
//
//	int a = 1;
//
//	printf("%d\n", a);
//	printf("%d\n", ::a);  //左边是空格，表示从全局域找
//
//	int ans = gujingj::Sub(4, 2);
//	printf("%d\n", ans);
//
//	struct gujingj::Node node;
//
//	ans = gujingj::N::Add(7, 8);
//	printf("%d\n", ans);
//
//	return 0;
//}

#include<iostream>
//  using namespace std;  // 平时学习语法，做练习时，可以这么用
//   C++库的实现定义在一个叫std的命名空间中

using std::cout;
using std::endl;

int main()
{
	std::cout << "hello world" << std::endl;
	cout << "hello world" << endl;
	cout << "hello world" << '\n';


	cout << "hello world";
	printf("hello world\n");

	int i = 100;
	double d = 99.01;

	cout << i << " " << d << endl;
	//cout  -  流插入运算符  -  自动识别类型
	//endl  -  代表换行

	std::cin >> i >> d;

	cout << i << ' ' << d << endl;

	return 0;
}
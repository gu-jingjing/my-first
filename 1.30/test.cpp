#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

//int main()
//{
//	int a = 100;
//	int& aa = a;  //   引用定义    &  -  引用  （不是取地址）
//	//aa  与  a  地址相同
//
//	//引用 必须在定义的时候初始化
//	//  一个变量可以有多个引用
//	//引用一旦引用一个实体，再不能引用其它实体
//
//	int b = 100;
//	int& bb = b;
//	int& bbb = b;
//	int& b2 = bb;
//
//	return 0;
//}


////引用做参数
////传引用（不是传值也不是传地址）
//void Swap(int& aa, int& bb)
//{
//	int tmp = aa;
//	aa = bb;
//	bb = tmp;
//}
//
//int main()
//{
//	int a = 100;
//	int b = 130;
//	//int& aa = a;
//	//int& bb = b;
//	Swap(a, b);
//
//	printf("%d %d", a, b);
//
//	return 0;
//}



//引用做返回值
//引用返回：不会生成ans 的拷贝返回，直接返回ans的引用

//如果函数返回时，出了函数的作用域，如果返回对象还在（还没给系统），则可以使用引用返回，
//如果已经还给系统了，则必须使用传值返回

//引用的作用主要体现在传参和传返回值
//  1、引用传参和传返回值，有些场景下面，可以提高性能（大对象+深拷贝对象）
//  2、引用传参和传返回值，输出型参数和输出型返回值。 也就是说，有些场景下面，形参的改变可以改变实参
//  有些场景下，引用返回  可以改变返回对象

//int Sub(int x, int y)
//{
//	int ans = x - y;
//	return ans;
//}
//
//int main()
//{
//	int ret = Sub(100, 9);
//
//	cout << ret << endl;
//
//	return 0;
//}


//常引用

int main()
{
	////权限放大，不行
	//const int a = 100;
	//int& aa = a;

	//可行,权限不变
	const int a = 100;
	const int& aa = a;

	//权限缩小，可行
	int b = 100;
	const int& bb = b;

	return 0;
}
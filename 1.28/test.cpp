//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//
//namespace gujingj
//{
//	//���ﶨ��ı�������ȫ�ֱ������ŵ���̬��
//	//�����ռ���Զ������������������
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
////�����������ռ�չ��  -  ���������㣬������ʧЧ   ��ò���
//using namespace gujingj;
//
////����չ��ĳһ��   չ�������ռ䳣�õ�
//using gujingj::Sub;
//
//int main()
//{
//	gujingj::rand = 100;
//	printf("%d \n", gujingj::rand);//    ::    -    �������޶���
//
//
//	int a = 1;
//
//	printf("%d\n", a);
//	printf("%d\n", ::a);  //����ǿո񣬱�ʾ��ȫ������
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
//  using namespace std;  // ƽʱѧϰ�﷨������ϰʱ��������ô��
//   C++���ʵ�ֶ�����һ����std�������ռ���

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
	//cout  -  �����������  -  �Զ�ʶ������
	//endl  -  ������

	std::cin >> i >> d;

	cout << i << ' ' << d << endl;

	return 0;
}
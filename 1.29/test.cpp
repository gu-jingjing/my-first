#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//ȱʡ����
//ȫȱʡ�����в���������ȱʡֵ
void Print(int a = 0)
{
	cout << a << endl;
}

//��ȱʡ  -  ȱʡһ����
//1.  ��ȱʡ������������������θ��������ܼ��
//2.  ȱʡ���������ں��������Ͷ�����ͬʱ����
void Print2(int a, int b = 22, int c = 33)
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}

//int main()
//{
//	const char* arr = "hello world";
//	cout << arr << endl;
//
//	//  cin  -  ����ȡ�����
//
//	Print(10);
//	Print();  //û�д���ʱ��ʹ�ò�����Ĭ��ֵ
//
//
//	return 0;
//}

//��������
//���������Ǻ�����һ�����������C++������ͬһ�����������������������Ƶ�ͬ��������
//��Щͬ�������� �β��б��������� �� ���� �� ˳�� ����ͬ������������ʵ�ֹ������� �������Ͳ�ͬ������

//ȱʡֵ��ͬ�����ܹ�������

//�������������������أ�����ʹ��ʱ������
void Me()
{
	cout << 1 << endl;
}

void Me(int a = 0)
{
	cout << 2 << endl;
}

//����

int Sub(int x, int y)
{
	return x - y;
}

double Sub(double x, double y)
{
	return x - y;
}

int main()
{

	cout << Sub(8, 6) << endl;


	cout << Sub(8.8,6.6) << endl;

	return 0;
}
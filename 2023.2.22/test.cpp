#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Date
{
public:
	Date(int year)
		:_year(year)
	{
		cout << "Date(int year)" << endl;

	}

	Date(const Date& dd)
	{
		cout << "Date(const Date& dd)" << endl;
	}


	/*explicit Date(int year)
		:_year(year)
	{}*/

private:
	int _year;
};

int main()
{
	Date d1(2022);

	Date d2 = 2022;  //��ʽ����ת��
	//������2022����һ����ʱ����Date(2022)������������󿽱�����d2
	//����C++��������������һ�������У��������ᱻ�Ż����϶�Ϊһ��
	//�������ﱻ�Ż�Ϊ  ֱ�Ӿ���һ������

	//��ʽ����ת�� - ������� -- ��ʾ�������������

	return 0;
}
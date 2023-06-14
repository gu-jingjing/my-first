#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;

int main()
{
	string s1 = "xxx";
	string s2 = "abcdef";
	s2 += s1;
	cout << s2 << endl;

	return 0;
}
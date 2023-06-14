#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//结构体可以让C语言创建新的类型

//创建一个学生
struct Stu
{
	char name[40];
	int age;
	double score;
};

//创建一个书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "王朝", 20, 88 };//结构体的创建和初始化
	//struct Book b = { "风", 88, "2345445432543" };

	printf("1：%s %d %lf\n", s.name, s.age, s.score);

	struct Stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf", ps->name, ps->age, ps->score);//结构指针->成员变量名

	//以上三条打印结果相同

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ṹ�������C���Դ����µ�����

//����һ��ѧ��
struct Stu
{
	char name[40];
	int age;
	double score;
};

//����һ���������
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "����", 20, 88 };//�ṹ��Ĵ����ͳ�ʼ��
	//struct Book b = { "��", 88, "2345445432543" };

	printf("1��%s %d %lf\n", s.name, s.age, s.score);

	struct Stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf", ps->name, ps->age, ps->score);//�ṹָ��->��Ա������

	//����������ӡ�����ͬ

	return 0;
}
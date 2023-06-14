#pragma once
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<string.h>
//
//#define MAX 1000
//#define NAME_MAX 10
//#define SEX_MAX 8
//#define TELE_MAX 20
//#define ADDR_MAX 20
//
//struct PeoInfo
//{
//	char name[NAME_MAX];
//	char sex[SEX_MAX];
//	int age;
//	char telephone[TELE_MAX];
//	char address[ADDR_MAX];
//};
//
//typedef struct Contact
//{
//	struct PeoInfo data[MAX];
//	int size;
//}Contact;
//
////��ʼ��ͨѶ¼
//void ContactInit(Contact* con);
//
////�����ϵ����Ϣ
//void AddInfo(Contact* con);
// 
////ɾ��ָ����ϵ����Ϣ
//void DeleteInfo(Contact* con);
//
////����ָ����ϵ����Ϣ
//void FindInfo(const Contact* con);
//
////�޸�ָ����ϵ����Ϣ
//void ModifyInfo(Contact* con);
//
////��ʾ������ϵ����Ϣ
//void PrintInfo(Contact* con);
//
////���������ϵ��
//void EmptyInfo(Contact* con);
//
////����������������ϵ��
//void SortByName(Contact* con);


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

#define DEFAULT_CAP 3
#define DEFAULT_DATA 3
#define NAME_MAX 10
#define SEX_MAX 8
#define TELE_MAX 20
#define ADDR_MAX 20

struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char telephone[TELE_MAX];
	char address[ADDR_MAX];
};

typedef struct Contact
{
	struct PeoInfo* data;
	int size;
	int capacity;
}Contact;

//��ʼ��ͨѶ¼
void ContactInit(Contact* con);

//�����ϵ����Ϣ
void AddInfo(Contact* con);

//ɾ��ָ����ϵ����Ϣ
void DeleteInfo(Contact* con);

//����ָ����ϵ����Ϣ
void FindInfo(const Contact* con);

//�޸�ָ����ϵ����Ϣ
void ModifyInfo(Contact* con);

//��ʾ������ϵ����Ϣ
void PrintInfo(Contact* con);

//���������ϵ��
void EmptyInfo(Contact* con);

//����������������ϵ��
void SortByName(Contact* con);

//����ͨѶ¼
void DestroyContact(Contact* con);

//�������ݵ��ļ�
void SaveContact(Contact* con);
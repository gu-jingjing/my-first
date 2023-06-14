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
////初始化通讯录
//void ContactInit(Contact* con);
//
////添加联系人信息
//void AddInfo(Contact* con);
// 
////删除指定联系人信息
//void DeleteInfo(Contact* con);
//
////查找指定联系人信息
//void FindInfo(const Contact* con);
//
////修改指定联系人信息
//void ModifyInfo(Contact* con);
//
////显示所有联系人信息
//void PrintInfo(Contact* con);
//
////清空所有联系人
//void EmptyInfo(Contact* con);
//
////以名字排序所有联系人
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

//初始化通讯录
void ContactInit(Contact* con);

//添加联系人信息
void AddInfo(Contact* con);

//删除指定联系人信息
void DeleteInfo(Contact* con);

//查找指定联系人信息
void FindInfo(const Contact* con);

//修改指定联系人信息
void ModifyInfo(Contact* con);

//显示所有联系人信息
void PrintInfo(Contact* con);

//清空所有联系人
void EmptyInfo(Contact* con);

//以名字排序所有联系人
void SortByName(Contact* con);

//销毁通讯录
void DestroyContact(Contact* con);

//保存数据到文件
void SaveContact(Contact* con);
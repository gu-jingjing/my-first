//#define _CRT_SECURE_NO_WARNINGS 1
//#include"contact.h"
//
////��ʼ��ͨѶ¼
//void ContactInit(Contact* con)
//{
//	assert(con);
//	con->size = 0;
//	memset(con, 0, sizeof(struct PeoInfo) * MAX);
//}
//
////�����ϵ����Ϣ
//void AddInfo(Contact* con)
//{
//	assert(con);
//	printf("\n������������");
//	scanf("%s", con->data[con->size].name);
//	printf("\n�������Ա�");
//	scanf("%s", con->data[con->size].sex);
//	printf("\n���������䣺");
//	scanf("%d", &con->data[con->size].age);
//	printf("\n������绰��");
//	scanf("%s", con->data[con->size].telephone);
//	printf("\n������סַ��");
//	scanf("%s", con->data[con->size].address);
//
//	++con->size;
//}
//
//int FindInformation(const Contact* con)
//{
//	char tname[NAME_MAX] = { 0 };
//	printf("��������Ҫ��������ϵ������:");
//	scanf("%s", tname);
//	int count = 0;
//	while (count < con->size)
//	{
//		if (strcmp(tname, con->data[count].name) == 0)
//		{
//			return count;
//		}
//		count++;
//	}
//	return -1;
//
//}
//
////ɾ��ָ����ϵ����Ϣ
//void DeleteInfo(Contact* con)
//{
//	int count = FindInformation(con);
//	if (count < con->size)
//	{
//		while (count < con->size - 1)
//		{
//			con->data[count] = con->data[count + 1];
//			count++;
//		}
//		con->size--;
//		return;
//	}
//	else if (count == -1)
//	{
//		printf("�Ҳ�������ϵ��\n");
//	}
//}
//
////����ָ����ϵ����Ϣ
//void FindInfo(const Contact* con)
//{
//	int i = FindInformation(con);
//	printf("%-10s %-5s %-5d %-10s %-10s\n",
//		con->data[i].name, con->data[i].sex, con->data[i].age,
//		con->data[i].telephone, con->data[i].address);
//}
//
////�޸�ָ����ϵ����Ϣ
//void ModifyInfo(Contact* con)
//{
//	int i = FindInformation(con);
//	if (i == -1)
//	{
//		printf("�������\n");
//	}
//	else
//	{
//		printf("\n������������");
//		scanf("%s", con->data[i].name);
//		printf("\n�������Ա�");
//		scanf("%s", con->data[i].sex);
//		printf("\n���������䣺");
//		scanf("%d", &con->data[i].age);
//		printf("\n������绰��");
//		scanf("%s", con->data[i].telephone);
//		printf("\n������סַ��");
//		scanf("%s", con->data[i].address);
//	}
//}
//
////��ʾ������ϵ����Ϣ
//void PrintInfo(const Contact* con)
//{
//	assert(con);
//	printf("����       �Ա�  ����  �绰       סַ\n");
//	int i = 0;
//	for (i = 0; i < con->size; i++)
//	{
//		printf("%-10s %-5s %-5d %-10s %-10s\n",
//			con->data[i].name, con->data[i].sex, con->data[i].age,
//			con->data[i].telephone, con->data[i].address);
//	}
//}
//
////���������ϵ��
//void EmptyInfo(Contact* con)
//{
//	assert(con);
//	memset(con, 0, sizeof(struct PeoInfo) * con->size);
//	con->size = 0;
//}
//
//int compare_by_name(const void* e1,const void* e2)
//{
//	return strcmp(((struct PeoInfo*)e1)->name , ((struct PeoInfo*)e2)->name);
//}
//
////����������������ϵ��
//void SortByName(Contact* con)
//{
//	qsort(con, con->size, sizeof(struct PeoInfo), compare_by_name);
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void CheckCapacity(Contact* con);

void LoadContact(Contact* con)
{
	FILE* pf = fopen("contact.data", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}

	struct PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pf))
	{
		CheckCapacity(con);
		con->data[con->size] = tmp;
		con->size++;
	}

	fclose(pf);
	pf = NULL;
}

//��ʼ��ͨѶ¼
void ContactInit(Contact* con)
{
	assert(con);
	con->size = 0;
	con->data = malloc(sizeof(struct PeoInfo) * DEFAULT_CAP);
	if (con->data == NULL)
	{
		printf("malloc failed\n");
		exit(-1);
	}
	con->capacity = DEFAULT_CAP;

	//�����ļ�����Ϣ��ͨѶ¼��
	LoadContact(con);
}

void CheckCapacity(Contact* con)
{
	if (con->capacity == con->size)
	{
		struct PeoInfo* ptr = realloc(con->data, sizeof(struct PeoInfo) * (con->capacity + DEFAULT_DATA));
		if (ptr == NULL)
		{
			printf("malloc failed\n");
			exit(-1);
		}
		con->data = ptr;
		con->capacity += DEFAULT_DATA;
	}
}

//�����ϵ����Ϣ
void AddInfo(Contact* con)
{
	assert(con);
	CheckCapacity(con);

	printf("\n������������");
	scanf("%s", con->data[con->size].name);
	printf("\n�������Ա�");
	scanf("%s", con->data[con->size].sex);
	printf("\n���������䣺");
	scanf("%d", &con->data[con->size].age);
	printf("\n������绰��");
	scanf("%s", con->data[con->size].telephone);
	printf("\n������סַ��");
	scanf("%s", con->data[con->size].address);

	++con->size;
}

int FindInformation(const Contact* con)
{
	char tname[NAME_MAX] = { 0 };
	printf("��������Ҫ��������ϵ������:");
	scanf("%s", tname);
	int count = 0;
	while (count < con->size)
	{
		if (strcmp(tname, con->data[count].name) == 0)
		{
			return count;
		}
		count++;
	}
	return -1;

}

//ɾ��ָ����ϵ����Ϣ
void DeleteInfo(Contact* con)
{
	int count = FindInformation(con);
	if (count < con->size && count >= 0)
	{
		while (count < con->size - 1)
		{
			con->data[count] = con->data[count + 1];
			count++;
		}
		con->size--;
		return;
	}
	else if (count == -1)
	{
		printf("�Ҳ�������ϵ��\n");
	}
}

//����ָ����ϵ����Ϣ
void FindInfo(const Contact* con)
{
	int i = FindInformation(con);
	if (i != -1)
	{
		printf("%-10s %-5s %-5d %-10s %-10s\n",
			con->data[i].name, con->data[i].sex, con->data[i].age,
			con->data[i].telephone, con->data[i].address);
	}
	else
	{
		printf("�Ҳ���\n");
	}
}

//�޸�ָ����ϵ����Ϣ
void ModifyInfo(Contact* con)
{
	int i = FindInformation(con);
	if (i == -1)
	{
		printf("�������\n");
	}
	else
	{
		printf("\n������������");
		scanf("%s", con->data[i].name);
		printf("\n�������Ա�");
		scanf("%s", con->data[i].sex);
		printf("\n���������䣺");
		scanf("%d", &con->data[i].age);
		printf("\n������绰��");
		scanf("%s", con->data[i].telephone);
		printf("\n������סַ��");
		scanf("%s", con->data[i].address);
	}
}

//��ʾ������ϵ����Ϣ
void PrintInfo(const Contact* con)
{
	assert(con);
	printf("����       �Ա�  ����  �绰       סַ\n");
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		printf("%-10s %-5s %-5d %-10s %-10s\n",
			con->data[i].name, con->data[i].sex, con->data[i].age,
			con->data[i].telephone, con->data[i].address);
	}
}

//���������ϵ��
void EmptyInfo(Contact* con)
{
	assert(con);
	memset(con, 0, sizeof(struct PeoInfo) * con->size);
	con->size = 0;
}

int compare_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}

//����������������ϵ��
void SortByName(Contact* con)
{
	qsort(con->data, con->size, sizeof(struct PeoInfo), compare_by_name);
}

//����ͨѶ¼
void DestroyContact(Contact* con)
{
	free(con->data);
	con->data = NULL;
	con->size = con->capacity = 0;
}

//�������ݵ��ļ�
void SaveContact(Contact* con)
{
	FILE* pf = fopen("contact.data", "wb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		fwrite(con->data + i, sizeof(struct PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}
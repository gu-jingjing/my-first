#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<map>
#include<string>

using namespace std;

//int main()
//{
//	//cin  -  ����ȡ�����
//	//cout -  �����������
//
//	//���õĵײ�ԭ��
//	//�����
//
//	//auto�ؼ���(C++11) (2011�꣩
//	int b = 100;
//	//�Զ��Ƶ�a������
//	auto a = &b;
//	auto c = "abc";  //char const * ����
//	auto d = 99.5;
//	auto e = 'a';
//
//	cout << typeid(c).name() << endl;   //���Դ�ӡ���������
//	cout << typeid(a).name() << endl;   //���Դ�ӡ���������
//	cout << typeid(d).name() << endl;   //���Դ�ӡ���������
//	cout << typeid(e).name() << endl;   //���Դ�ӡ���������
//
//
//	//autoʵ���е��÷���
//	std::map<std::string, std::string> dict = { {"sort","����"},{"insert","����"} };
//	//std::map<std::string, std::string>::iterator it = dict.begin();
//
//	//�����ұߵ�ֵ�Զ��Ƶ� it ������
//	auto it = dict.begin();
//
//	int x = 100;
//	auto aa = &x; //int*
//	auto* bb = &x; //int*
//	auto& cc = x;  //int
//
//	cout << typeid(aa).name() << endl;
//	cout << typeid(bb).name() << endl;
//	cout << typeid(cc).name() << endl;
//
//	auto const y = x;
//	
//	//auto  ������Ϊ�β����ͣ���Ϊ�������޷��� �� ��ʵ�����ͽ����Ƶ�
//	//auto  Ҳ���ܶ�������
//
//	//�﷨�� -- ��Χfor
//	int arr[] = { 1,3,5,7,9 };
//
//
//	//C++11��Χfor
//	//�Զ�ȡ����arr�е�ÿ��Ԫ�ظ�ֵ��e
//	//�Զ��жϽ���
//	for (auto e : arr)
//	{
//		cout << e << endl;
//	}
//	//���������ȡ
//	for (auto m : arr)
//	{
//		cout << m << endl;
//	}
//
//	//��Χfor  -  �������е�ÿ��ֵ+1
//	for (auto& e : arr)
//	{
//		e++;
//		cout << e << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	//��ʼ����ָ��
//
//	//C++98/=3
//	int* p1 = NULL;
//	int* p2 = 0;
//
//	//C++11
//	//�Ƽ���������д��
//	int* p3 = nullptr;
//
//	return 0;
//}

//C++�ж����ࣺ  struct/class
//C++����C����ṹ����÷�
//ͬʱstruct ��C++��Ҳ����������


//struct Student
//{
//	//��Ա����
//	char name[100];
//	int age;
//	int id;
//
//};
//
//
//int main()
//{
//	struct Student s1;//����C
//	Student s2;//�������࣬Student������Ҳ������
//
//	strcpy(s1.name, "����");
//	s1.id = 1;
//	s1.age = 17;
//
//	strcpy(s2.name, "������");
//	s2.id = 2;
//	s2.age = 16;
//
//	return 0;
//}

//C++�� �ͽṹ�岻ͬ  �� ���˿��Զ������ �������Զ��巽����������
//struct Student
//{
//	//��Ա����
//	char _name[100];
//	int _age;
//	int _id;
//
//	//��Ա����
//	void Init(const char* name, int age, int id)
//	{
//		strcpy(_name, name);
//		_age = age;
//		_id = id;
//	}
//
//	void Print()
//	{
//		cout << _name << endl;
//		cout << _age << endl;
//		cout << _id << endl;
//	}
//};
//
//int main()
//{
//	struct Student s1;
//	Student s2;
//
//	s1.Init("����", 17, 1);
//	s2.Init("������", 16, 2);
//	s1.Print();
//	s2.Print();
//
//	return 0;
//}


//�������������������:��װ���̳С���̬
//��װ:
//1.���ݺͷ������ŵ���һ����������
//2.�����޶���
//һ���ڶ������ʱ�򣬽�����ȷ��������޶�������Ҫ��class/structĬ���޶���private/public)

//��װ��һ�ָ��õ��ϸ����
//����װ��һ�����ɹ���

//1.���ݺͷ�������װ��������
//2.���Ը�����ʵĶ���ɹ��У����������ʵĶ����˽��/����

 class Student
{
	//��Ա����
	char _name[100];
	int _age;
	int _id;

public:
	//��Ա����
	void Init(const char* name, int age, int id)
	{
		strcpy(_name, name);
		_age = age;
		_id = id;
	}
//private:
	void Print()
	{
		cout << _name << endl;
		cout << _age << endl;
		cout << _id << endl;
	}
};

int main()
{
	struct Student s1;
	Student s2;

	s1.Init("����", 17, 1);
	s2.Init("������", 16, 2);
	s1.Print();
	s2.Print();

	return 0;
}

//�������������С��ֻ����Ա�����������ڴ���룬C++�ڴ��������C�ṹһ��

//������1byte����1byte���洢��Ч���ݣ�ֻ��Ϊ��ռλ����ʾ�������
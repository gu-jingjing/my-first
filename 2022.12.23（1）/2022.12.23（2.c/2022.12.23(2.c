#define _CRT_SECURE_NO_WARNINGS 1
//typedef unsigned int u_int;//typedefµÄÓÃÍ¾

void test1()
{
	static int a = 1;
	a++;
	printf("%d\t", a);
}

int main()
{
	//u_int num = 100;
	//unsigned int num2 = 100;

	int i = 0;
	while (i < 11)
	{
		test1();
		i++;
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//static���ξֲ�����
//����1
void test()
{
	int i = 0;
	i++;
	printf("%d", i);
}
//����2
void test()
{
	static int i = 0;//ʹi���䣬��ֹ
	i++;
	printf("%d", i);
}//������
int main()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	system("pause");
	return 0;
}
//  ����ȫ�ֱ���
//����1
//add.c
int g_val = 2018;
//test.c
int main()
{
	printf("%d\n", g_val);
	system("pause");
	return 0;
}//��������
//����2
//add.c
static int g_val = 2018;
//test.c
int main()
{
	printf("%d\n", g_val);
	system("pause");
	return 0;
}//�������
//һ��ȫ�ֱ�����static���Σ�ʹ�����ȫ�ֱ���ֻ���ڱ�Դ�ļ���ʹ�ã�����������Դ�ļ���ʹ��

//static���κ���
//����1
//add.c
int Add(int x, int y)
{
	return x + y;
}
//test.c
int main()
{
	printf("%d\n", Add(2, 3));
	system("pause");
	return 0;
}
//����2
//add.c
static int Add(int x, int y)
{
	return x + y;
}
//test.c
int main()
{
	printf("%d\n", Add(2, 3));
	system("pause");
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//static修饰局部变量
//代码1
void test()
{
	int i = 0;
	i++;
	printf("%d", i);
}
//代码2
void test()
{
	static int i = 0;//使i不变，静止
	i++;
	printf("%d", i);
}//主函数
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
//  修饰全局变量
//代码1
//add.c
int g_val = 2018;
//test.c
int main()
{
	printf("%d\n", g_val);
	system("pause");
	return 0;
}//编译正常
//代码2
//add.c
static int g_val = 2018;
//test.c
int main()
{
	printf("%d\n", g_val);
	system("pause");
	return 0;
}//编译错误
//一个全局变量被static修饰，使得这个全局变量只能在本源文件内使用，不能在其他源文件内使用

//static修饰函数
//代码1
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
//代码2
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


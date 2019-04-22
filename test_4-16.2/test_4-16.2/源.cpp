#define _CRT_SECURE_NO_WARNINGS 1
//给定两个整形变量的值，将两个值的内容进行交换。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10, b=20, t=0;
	t = a;
	a = b;
	b = t;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}

//不允许创建临时变量，交换两个数的内容（附加题） 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;//这三行是将a,b交换，相当于公式
	b = a ^ b;//
	a = a ^ b;//
	printf("%d %d\n", a, b);
	system("pause");
	return 0;

}

//求10 个整数中最大值
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,b;
	char a[10] = { 1, 3, 4, 6, 7, 8, 10, 12, 24, 44 };
	int max=1;
	for (i = 1; i < 10; i++)
	{
		b = a[i];
		if (b>max)
			max = b;
	}
	printf("%d", b);
	system("pause");
	return 0;
}

//将三个数按从大到小输出。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t, a = 10, b = 5, c = 20;
	if (a < b)
	{
		t = a;//将a,b之间的大值赋给a
		a = b;//
		b = t;//
	}
	if (a < c)
	{
		t = a;//将a,c之间的大值赋给a，现在a是最大值了
		a = c;//
		c = t;//
	}
	if (b < c)
	{
		t = b;//将b,c之间的大值赋给b
		b = c;//
		c = t;//
	}
	printf("%d %d %d", a, b, c);
	system("pause");
	return 0;
}


//求两个数的最大公约数。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, i,gongyue,t;
	scanf("%d%d", &a, &b);
	gongyue = 1;        //先取最小公约数
	for (i = 1; i < a; i++)
	{
		if (a%i == 0 && b%i == 0)
			t = i;      //取a,b的公约数
		if (gongyue<t)
			gongyue = t;//取最大公约数
	}
	printf("%d", gongyue);
	system("pause");
	return 0;
}
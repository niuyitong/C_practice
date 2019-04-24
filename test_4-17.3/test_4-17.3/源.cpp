#define _CRT_SECURE_NO_WARNINGS 1
//将数组A中的内容和数组B中的内容进行交换。（数组一样大） 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k;
	int A[5];
	int B[5];
	printf("A组： ");
	for (i = 0; i < 5; i++)//输入A组
	{
		scanf("%d", &A[i]);
	}
	printf("B组： ");
	for (j = 0; j < 5; j++)//输入B组
	{
		scanf("%d", &B[j]);
	}
	for (k = 0; k < 5;k++)//下面三行是交换A组和B组 相当于公式！
	{
		A[k] = A[k] ^ B[k];
		B[k] = A[k] ^ B[k];
		A[k] = A[k] ^ B[k];
	}
	printf("互换A组：");//输出A组
	for (i = 0; i < 5; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("互换B组：");
	for (i = 0; i < 5; i++)//输出B组
	{
		printf("%d ", B[i]);
	}
	system("pause");
	return 0;
}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	double k=0,b=0,sum;
	for (a = 1; a <= 100; a += 2)
	{
		k += 1.0 / a;//正数的和
	}
	for (a = 2; a <= 100; a += 2)
	{
		b += -1.0 / a;//负数的和

	}
	sum = k + b;
	printf("%lf", sum);
	system("pause");
	return 0;
}

//编写程序数一下 1到 100 的所有整数中出现多少次数字9
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j,k, count = 0;
	for (i = 1; i <= 100; i++)
	{
		j = i % 10;//检测个位数的9
		if (j == 9)
		{
			count++;//每检测到一个9，个数就加一
		}
		k = i / 10;//检测十位数的9
		if (k == 9)
		{
			count++;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}
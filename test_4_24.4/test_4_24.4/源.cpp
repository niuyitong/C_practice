#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//*
//***
//*****
//*******
//*********
//***********
//*************13
//***********11 8
//*********9 9
//*******7 10
//*****
//***
//*
//
int main()
{
	int i;
	int j;
	int k;
	for (i = 1; i < 8; i++)
	{
		j = 2 * i - 1;
		for (j; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	k = i - 2;
	for (k; k > 0; k--)
	{
		j = 2 * k - 1;
		for (j; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}


//求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。

int main()
{
	int i, j=0, k=0,t=0;
	int sum = 0;
	for (i = 100; i < 1000; i++)
	{
		j = i % 10;
		k = i / 10 % 10;
		t = i / 100;
		if (i == j*j*j+ k*k*k + t*t*t)
			printf("%d ", i);
	}
		system("pause");
		return 0;
}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
int main()
{
	int a, k = 0, i, Sn = 0;
	scanf("%d", &a);
	for (i = 1; i < 6; i++)
	{
		k = k * 10 + a;
		Sn += k;
	}
	printf("%d", Sn);
	system("pause");
	return 0;
}

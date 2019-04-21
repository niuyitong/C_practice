#define _CRT_SECURE_NO_WARNINGS 1
//
////      100-200之间的素数
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0, j=0;
	for (i = 101; i <= 200; i+=2)//只循环奇数
	{
		for (j = 2; j <= sqrt(i); j++)//平方根，a*b 一定有一个数小于根号下a*b
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j>sqrt(i))//说明没有遇到break 一直将for循环到底，是素数
			printf("%d\n", i);
	}
	system("pause");
	return 0;
}

//    //乘法口诀表
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			k = i*j;
			printf("%d*%d=%-2d", i, j, k);//为了更整齐，2为右对齐，-2是左对齐
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

     //1000 - 2000年之间的闰年
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int year;
	for (year = 1000; year <= 2000; year++)
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)//判断闰年
		printf("%d\t", year);
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
int sheet_cheng(int m, int n, int i,int k)
	{
	for (i = 1; i <= n;i++)

	{
		for (m = 1; m <= i; m++)
		{
			k = i*m;
			printf("%d*%-2d=%-2d ", m, i, k);
		}
		printf("\n");
	}
	return 0;
	}
int main()
{
	int m=1, n, i=0,k=0;
	scanf("%d", &n);
	int ret = sheet_cheng(m,n,i,k);
	system("pause");
	return 0;
}

//使用函数实现两个数的交换。
//int exchange(int *x, int *y)
//{
//	int t;
//	t = *x;
//	*x = *y;
//	*y = t;
//	return 1;
//}
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int ret = exchange(&m, &n);
//	printf("%d %d",m,n );
//	system("pause");
//	return 0;
//}

//实现一个函数判断year是不是闰年。
//int is_leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year))
//		printf("是闰年");
//	else
//	printf("不是闰年");
//	system("pause");
//	return 0;
//}

//实现一个函数，判断一个数是不是素数。
//int is_prime(int n)
//{
//	int j;
//	for (j = 2; j < n; j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	if (is_prime(i))
//		printf("是素数");
//	else
//		printf("不是素数");
//	system("pause");
//	return 0;
//}

//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
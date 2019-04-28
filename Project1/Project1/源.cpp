#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int i, sum=1,n=10;
//	for (i = 1; i <= 10; i++)
//	{
//		sum =sum* i;
//
//	}
//	printf("%d", sum);
//
//	system("pause");
//	return 0;
//}
int main()
{
	int i, j, sum=0,ret =1;
	for (i = 1; i <= 3; i++)
	{
		ret = 1;
		for (j = 1; j <= i; j++)
		{


			ret = ret*j;
		}
			sum += ret;
		
	}
	printf("%d", sum);

	system("pause");
	return 0;
}
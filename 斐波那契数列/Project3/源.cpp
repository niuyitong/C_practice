#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//斐波那契数数列 
 //1 1 2 3 5 8 13 21 34 55 ... 
int fib(int n)
 {
	if (n <= 2)
			return 1;
	else
			return fib(n - 1) + fib(n - 2);
 }


 int main()
 {
		int n = 0;
		int ret = 0;
		scanf("%d", &n);
		ret = fib(n);
 	printf("%d\n", ret);
		system("pause");
 	return 0;
 }





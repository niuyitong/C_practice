#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//�ǵݹ� ��쳲�����
int fib1(int n)
{
	int c = 0;
	int a = 1;
	int b = 1;
	if (n <= 2)
	{
		return 1;
	}
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}//�ݹ� 
int fib2(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib2(n - 1) + fib2(n - 2);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fib1(n));
	printf("%d\n", fib2(n));
	system("pause");
	return 0;
}
//��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 
int fun(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	return n*fun(n, k - 1);
}
int main()
{
	int n = 5;
	int k = 3;
	printf("n^k=%d\n", fun(n, k));
	system("pause");
	return 0;
}
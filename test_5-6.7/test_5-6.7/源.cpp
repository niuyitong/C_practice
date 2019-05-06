#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//非递归 求斐波那契
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
}//递归 
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
//编写一个函数实现n^k，使用递归实现 
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

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
int DigitSum(int x)
{
	if (x < 10)
		return x;
	else
		return (x % 10 + DigitSum(x / 10));
}

int main()
{
	int n = 1729;
	int ret = DigitSum(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

// 编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。

void reverse_string(char *string)
{
	if ('\0' != *(++string))
		reverse_string(string);
	printf("%c", *(string - 1));
}

int main()
{
	char *a = "abcde";
	reverse_string(a);
	printf("\n");
	system("pause");
	return 0;
}

//递归和非递归分别实现strlen
//非递归
int Strlen(char* str)
{
	 int i = 0;
	 while (*str != '\0')
	    {
		       ++str;
		       ++i;
	     }
	    return i;
 }
 int main()
 {
	     char str[] = "abcdefghh";
	     printf("%d\n", Strlen(str));
	     return 0;
 }
 //递归
 int Strlen(char* str)
 {
	   if (*str == '\0')
		   {
		         return 0;
		    }
	   else
		   {
		        return 1 + Strlen(++str);
		   }
 }
 //递归和非递归分别实现求n的阶乘
 int main()
	 {
	      char str[] = "abcdefg";
	     printf("%d\n", Strlen(str));
	     return 0;
	 }
 int Factorial_r(int num)
 {
	 //非递归实现
	 int k = 1;
	 while (num > 0)
		 k *= num--;
	 return k;
 }

 int Factorial(int num)
 {
	 //递归实现
	 return num > 0 ? num * Factorial(num - 1) : 1;
 }

 int main()
 {
	 int n = 0;

	 printf("请输入一个数，求他的阶乘:\n");
	 scanf("%d", &n);
	 printf("%d\n", Factorial(n));
	 printf("%d\n", Factorial_r(n));
	 system("pause");
	 return 0;
 }
 //递归方式实现打印一个整数的每一位 

 void print(int n)
 {
	 if (n>9)
	 {
		 print(n / 10);
	 }
	 printf("%d  ", n % 10);
 }

 int main()
 {

	 int num = 1234;
	 print(num);
	 system("pause");
	 return 0;
 }
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

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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

// ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

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

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ǵݹ�
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
 //�ݹ�
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
 //�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
 int main()
	 {
	      char str[] = "abcdefg";
	     printf("%d\n", Strlen(str));
	     return 0;
	 }
 int Factorial_r(int num)
 {
	 //�ǵݹ�ʵ��
	 int k = 1;
	 while (num > 0)
		 k *= num--;
	 return k;
 }

 int Factorial(int num)
 {
	 //�ݹ�ʵ��
	 return num > 0 ? num * Factorial(num - 1) : 1;
 }

 int main()
 {
	 int n = 0;

	 printf("������һ�����������Ľ׳�:\n");
	 scanf("%d", &n);
	 printf("%d\n", Factorial(n));
	 printf("%d\n", Factorial_r(n));
	 system("pause");
	 return 0;
 }
 //�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 

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
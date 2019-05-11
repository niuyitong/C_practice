#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。


void Init(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}
}
void Print(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Reverse(int arr[], int n)
{
	int left = 0;
	int right = n - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
void Empty(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
}
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr, sz);
	Init(arr, sz);
	Print(arr, sz);
	Reverse(arr, sz);
	Print(arr, sz);
	Empty(arr, sz);
	Print(arr, sz);
	system("pause");
	return 0;
}
//输入键盘字符 若输入小写字母，则打印出大写字母，若输入大写字母，则打印小写字母，若输入数字，则不打印，若输入其他字符，则打印其他字符
int main()
{
	char ch;
	while (ch = getchar())
	{
		if (ch >= 'a'&&ch <= 'z')
		{
			putchar(ch - 32);
		}
		else if (ch >= 'A'&&ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else if (ch >= '0' && ch <= '9')
		{
			;
		}
		else
		{
			putchar(ch);
		}
	}
	system("pause");
	return 0;
}


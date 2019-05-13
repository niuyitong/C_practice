#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
////求一个整数存储在内存中的二进制中的1的个数
////方法1
//int main()
//{
//	int num = 10;//0000 1010
//	int count = 0;
//	while (num)
//	{
//		if (1 == num % 2)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}

////方法二
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1 == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}

//方法3
int main()
{
	int num = -1;
	int i = 0;
	int count = 0;
	while (num)
	{
		count++;
		num = num&(num - 1);
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
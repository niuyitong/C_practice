#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//��һ�������洢���ڴ��еĶ������е�1�ĸ���
//����1
int main()
{
	int num = 10;//0000 1010
	int count = 0;
	while (num)
	{
		if (1 == num % 2)
			count++;
		num = num / 2;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
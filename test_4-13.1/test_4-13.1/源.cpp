#define _CRT_SECURE_NO_WARNINGS 1
//
////      100-200֮�������
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0, j=0;
	for (i = 101; i <= 200; i+=2)//ֻѭ������
	{
		for (j = 2; j <= sqrt(i); j++)//ƽ������a*b һ����һ����С�ڸ�����a*b
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j>sqrt(i))//˵��û������break һֱ��forѭ�����ף�������
			printf("%d\n", i);
	}
	system("pause");
	return 0;
}

//    //�˷��ھ���
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
			printf("%d*%d=%-2d", i, j, k);//Ϊ�˸����룬2Ϊ�Ҷ��룬-2�������
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

     //1000 - 2000��֮�������
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int year;
	for (year = 1000; year <= 2000; year++)
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)//�ж�����
		printf("%d\t", year);
	system("pause");
	return 0;
}

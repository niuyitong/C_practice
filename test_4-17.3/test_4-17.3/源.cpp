#define _CRT_SECURE_NO_WARNINGS 1
//������A�е����ݺ�����B�е����ݽ��н�����������һ���� 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k;
	int A[5];
	int B[5];
	printf("A�飺 ");
	for (i = 0; i < 5; i++)//����A��
	{
		scanf("%d", &A[i]);
	}
	printf("B�飺 ");
	for (j = 0; j < 5; j++)//����B��
	{
		scanf("%d", &B[j]);
	}
	for (k = 0; k < 5;k++)//���������ǽ���A���B�� �൱�ڹ�ʽ��
	{
		A[k] = A[k] ^ B[k];
		B[k] = A[k] ^ B[k];
		A[k] = A[k] ^ B[k];
	}
	printf("����A�飺");//���A��
	for (i = 0; i < 5; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("����B�飺");
	for (i = 0; i < 5; i++)//���B��
	{
		printf("%d ", B[i]);
	}
	system("pause");
	return 0;
}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	double k=0,b=0,sum;
	for (a = 1; a <= 100; a += 2)
	{
		k += 1.0 / a;//�����ĺ�
	}
	for (a = 2; a <= 100; a += 2)
	{
		b += -1.0 / a;//�����ĺ�

	}
	sum = k + b;
	printf("%lf", sum);
	system("pause");
	return 0;
}

//��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j,k, count = 0;
	for (i = 1; i <= 100; i++)
	{
		j = i % 10;//����λ����9
		if (j == 9)
		{
			count++;//ÿ��⵽һ��9�������ͼ�һ
		}
		k = i / 10;//���ʮλ����9
		if (k == 9)
		{
			count++;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}
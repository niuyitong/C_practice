#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
int sheet_cheng(int m, int n, int i,int k)
	{
	for (i = 1; i <= n;i++)

	{
		for (m = 1; m <= i; m++)
		{
			k = i*m;
			printf("%d*%-2d=%-2d ", m, i, k);
		}
		printf("\n");
	}
	return 0;
	}
int main()
{
	int m=1, n, i=0,k=0;
	scanf("%d", &n);
	int ret = sheet_cheng(m,n,i,k);
	system("pause");
	return 0;
}

//ʹ�ú���ʵ���������Ľ�����
//int exchange(int *x, int *y)
//{
//	int t;
//	t = *x;
//	*x = *y;
//	*y = t;
//	return 1;
//}
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int ret = exchange(&m, &n);
//	printf("%d %d",m,n );
//	system("pause");
//	return 0;
//}

//ʵ��һ�������ж�year�ǲ������ꡣ
//int is_leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year))
//		printf("������");
//	else
//	printf("��������");
//	system("pause");
//	return 0;
//}

//ʵ��һ���������ж�һ�����ǲ���������
//int is_prime(int n)
//{
//	int j;
//	for (j = 2; j < n; j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	if (is_prime(i))
//		printf("������");
//	else
//		printf("��������");
//	system("pause");
//	return 0;
//}

//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
#define _CRT_SECURE_NO_WARNINGS 1
//�����������α�����ֵ��������ֵ�����ݽ��н�����
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10, b=20, t=0;
	t = a;
	a = b;
	b = t;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}

//����������ʱ���������������������ݣ������⣩ 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;//�������ǽ�a,b�������൱�ڹ�ʽ
	b = a ^ b;//
	a = a ^ b;//
	printf("%d %d\n", a, b);
	system("pause");
	return 0;

}

//��10 �����������ֵ
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,b;
	char a[10] = { 1, 3, 4, 6, 7, 8, 10, 12, 24, 44 };
	int max=1;
	for (i = 1; i < 10; i++)
	{
		b = a[i];
		if (b>max)
			max = b;
	}
	printf("%d", b);
	system("pause");
	return 0;
}

//�����������Ӵ�С�����
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t, a = 10, b = 5, c = 20;
	if (a < b)
	{
		t = a;//��a,b֮��Ĵ�ֵ����a
		a = b;//
		b = t;//
	}
	if (a < c)
	{
		t = a;//��a,c֮��Ĵ�ֵ����a������a�����ֵ��
		a = c;//
		c = t;//
	}
	if (b < c)
	{
		t = b;//��b,c֮��Ĵ�ֵ����b
		b = c;//
		c = t;//
	}
	printf("%d %d %d", a, b, c);
	system("pause");
	return 0;
}


//�������������Լ����
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, i,gongyue,t;
	scanf("%d%d", &a, &b);
	gongyue = 1;        //��ȡ��С��Լ��
	for (i = 1; i < a; i++)
	{
		if (a%i == 0 && b%i == 0)
			t = i;      //ȡa,b�Ĺ�Լ��
		if (gongyue<t)
			gongyue = t;//ȡ���Լ��
	}
	printf("%d", gongyue);
	system("pause");
	return 0;
}
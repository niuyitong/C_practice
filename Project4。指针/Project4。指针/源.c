#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int num = 10;
//	&num;
//	printf("%p\n", &num);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int *p = &num;
//	*p = 20;
//	system("pause");
//	return 0;
//}

int main()
{
	/*char ch = 'w';
	char*pc = &ch;
	*pc = 'q';
	printf("%c\n", ch);*/  //chΪq
	int num = 10;
	int*p = num;
	printf("%d", p);//pΪ10
	system("pause");
	return 0;
}
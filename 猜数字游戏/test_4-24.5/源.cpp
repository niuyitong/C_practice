#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//��ɲ�������Ϸ��
#include <time.h> 
 
void menu() 
{ 
	printf("************************\n"); 
	printf("******   1. play  ******\n"); 
	printf("******   0. exit  ******\n"); 
	printf("************************\n"); 
} 
 
//ʱ��� 
 

void game()
{ 
	//RAND_MAX 
	//1. ��������� 
	int num  = 0; 
	int guess = 0; 
	num = rand()%100+1; 
 
	//printf("%d\n", num); 
	//2. ������ 
	while(1) 
	{ 
		printf("�������(1-100)>:"); 
		scanf("%d", &guess); 
		if(guess < num) 
		{ 
			printf("��С��\n"); 
		} 
		else if(guess > num) 
		{ 
			printf("�´���\n"); 
		} 
		else 
		{ 
			printf("��ϲ�㣬�¶���\n"); 
			break; 
		} 
	} 
} 
int main()
{ 
	int input = 0; 
	srand((unsigned int)time(NULL));//time_t  == unsigned int 
	do  
	{ 
		menu(); 
		printf("��ѡ��:>"); 
		scanf("%d", &input); 
		switch(input) 
		{ 
		case 1: 
			game(); 
			break; 
		case 0: 
			printf("�˳���Ϸ\n"); 
			break; 
		default: 
			printf("ѡ�����\n"); 
			break; 
		} 
		// 
	} while (input); 
	return 0; 
} 
 
 

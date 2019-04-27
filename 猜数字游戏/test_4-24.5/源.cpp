#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//完成猜数字游戏。
#include <time.h> 
 
void menu() 
{ 
	printf("************************\n"); 
	printf("******   1. play  ******\n"); 
	printf("******   0. exit  ******\n"); 
	printf("************************\n"); 
} 
 
//时间戳 
 

void game()
{ 
	//RAND_MAX 
	//1. 生成随机数 
	int num  = 0; 
	int guess = 0; 
	num = rand()%100+1; 
 
	//printf("%d\n", num); 
	//2. 猜数字 
	while(1) 
	{ 
		printf("请猜数字(1-100)>:"); 
		scanf("%d", &guess); 
		if(guess < num) 
		{ 
			printf("猜小了\n"); 
		} 
		else if(guess > num) 
		{ 
			printf("猜大了\n"); 
		} 
		else 
		{ 
			printf("恭喜你，猜对了\n"); 
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
		printf("请选择:>"); 
		scanf("%d", &input); 
		switch(input) 
		{ 
		case 1: 
			game(); 
			break; 
		case 0: 
			printf("退出游戏\n"); 
			break; 
		default: 
			printf("选择错误！\n"); 
			break; 
		} 
		// 
	} while (input); 
	return 0; 
} 
 
 

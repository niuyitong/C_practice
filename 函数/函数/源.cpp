#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

 void Swap1(int x, int y) 
 { 
 	int tmp = 0; 
 	tmp = x; 
 	x = y; 
 	y = tmp; 
 } 
 void Swap2(int* px, int* py) 
 { 
 	int tmp = 0; 
 	tmp = *px 
 	*px = *py; 
 	*py = tmp; 
 } 
  
 int main() 
 { 
 	int a = 10; 
 	int b = 20; 
 	printf("a = %d b = %d\n", a, b); 
 	传值调用 
 	Swap1(a, b); 
 	传址调用 
 	Swap2(&a, &b); 
 	printf("a = %d b = %d\n", a, b); 
  
 	system("pause"); 
 	return 0; 
 } 
#include <math.h>


 void Add(int* p) 
 { 
 	(*p)++; 
 } 
  
 int main() 
 { 
 	int num = 0; 
 	Add(&num); 
 	printf("%d\n", num);//1 
 	Add(&num); 
 	printf("%d\n", num);//2 
 	system("pause"); 
 	return 0; 
 } 
  
  
 int main() 
 { 
 	int len = strlen("abc"); 
 	printf("%d\n", len); 
 	//链式访问 
 	printf("%d\n", strlen("abc"));// 
 	system("pause"); 
 	return 0; 
 } 
 int main() 
 { 
 	printf("%d", printf("%d", printf("%d", 43))); 
 	system("pause"); 
 	return 0; 
 } 
  
 int main() 
 { 
 	printf("hehe\n"); 
 	main(); 
 	return 0; 
 } 
  
 void print(int n) 
 { 
 	if(n>9) 
 	{ 
 		print(n/10); 
 	} 
 	printf("%d ", n%10); 
 } 
  
 int main() 
 { 
 	unsigned int num = 1234; 
 	print(num); 
 	//print(1234) 
 	//print(123) 4 
 	//print(12) 3 4 
 	//print(1) 2 3 4 
 	//1 2 3 4 
  
 	system("pause"); 
 	return 0; 
 } 

  
 void test(int n) 
 { 
 	if(n<10000) 
 		test(n+1); 
 } 
 int main() 
 { 
 	test(1); 
 	return 0; 
 } 
 #include <string.h>

 int my_strlen(char* str) 
 { 
 	int count = 0; 
 	while(*str != '\0') 
 	{ 
 		count++; 
 		str++; 
 	} 
 	return count; 
 } 
  
 int my_strlen(char* str) 
 { 
	if(*str == '\0') 
 		return 0; 
 	else 
 		return 1+my_strlen(str+1); 
 } 
  
 //my_strlen("abc") 
 //1+my_strlen("bc") 
 //1+1+my_strlen("c") 
 //1+1+1+my_strlen("") 
 //1+1+1+0 
 //3 
  
 int main() 
 { 
 	int len = my_strlen("abc"); 
 	printf("%d\n", len); 
 	system("pause"); 
 	return 0; 
 } 
  
  
  

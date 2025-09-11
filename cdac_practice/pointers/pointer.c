#include<stdio.h>
int main(){
	long int num=150;
	long int* ptr;
	ptr=&num;
	printf("%p\n",ptr);	
	printf("%ld\n",*ptr);
	return 0;}

#include"reverse.h"
#include<stdio.h>
int main(){
	int org,num,rev=0,digit;
	printf("Enter a positive number & Check for plaindrome\n");
	printf("Enter a number\n");
	scanf("%d",&num);
	org=num;	

	
	if (org==reverse(num)){
		printf("True ,Number is Palindrome\n");}
	else{
		printf("False ,Number is not a palindrome\n");}
}


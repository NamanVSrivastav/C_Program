#include<stdio.h>
int main(){
	int org,num,rev=0,digit;
	printf("Check for plaindrome\n");
	printf("Enter a number\n");
	scanf("%d",&num);
	if (num<0){
		printf("False");}

	org=num;
	while(num>0){
	digit=num%10;
	rev=(rev*10)+digit;
	num=num/10;
	}
	if (org==rev){
		printf("TRUE");}
	else{
		printf("FALSE");}
}


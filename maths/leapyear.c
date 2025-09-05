#include<stdio.h>
int main(){
	int yr;
	printf("enter a year:");
	scanf("%d",&yr);

	if ((yr%4==0) &&( yr%100!=0) ||( yr%400==0)){
		printf("year is a leap year\n");}
	else printf("year is not a leap year\n");	
	
		
	

	
}

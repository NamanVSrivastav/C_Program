
#include<stdio.h>
int main(){
	int digit,num,rev=0;
	printf("Enter a number to get a reverse:\n");
	scanf("%d",&num);
	if (num<=0){
	printf("enter positive no");}
	while(num>0){
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;}
	printf("REVERSE OF A NUMBER: %d",rev);

}

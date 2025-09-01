#include<stdio.h>
#include<math.h>

//function to count digits 
int countdigits(int n){
	int count = 0;
	while(n>0){
		count++;
		n /= 10;
	
	}
	return count;}
//function to check if number is armstrong
int isArmstrong(int num){
	int n = countdigits(num);
	int temp = num, sum=0, digit;
	while(temp>0){
		digit = temp % 10;
		sum += pow(digit,n);
		temp /=10;
	}
	if (sum==num){
		return 1;}
	else{
		return 0;}}
int main(){
	int num;
	
	printf("ENTER A NUMBER TO CHECK ARMSTRONG\n");
	scanf("%d",&num);
	if (isArmstrong(num)){
		printf("%d is an armstrong number.\n",num);}
	else {
		printf("%d is not an armstrong number.\n",num);}
	return 0;

	


}

#include<stdio.h>
int main(){
int a=0,b=1,n,next_term,count=1;
printf("enter a no:");
scanf("%d",&n);

if(n>=1){
	printf("%d\n",a);}

if(n>=2){
	printf("%d\n",b);}

count=3;
while (count<=n){
	next_term=a+b;
	printf("%d\n",next_term);
	a=b;
	b=next_term;
	count=count+1;}

return 0;}

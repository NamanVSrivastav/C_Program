// to take input and print sum of array with reverse of a array

#include<stdio.h>
#include<malloc.h>
int main(){
    int i,num,sum=0;
    
    int *arr=(int*)malloc(num*sizeof(int));
    
    printf("enter no of  elements\n ");
    scanf("%d",&num);
    
    for (i=0;i<num;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum of the elements of array%d\n",sum);


    for (i=0;i<num/2;i++){
        int temp=arr[i];
        arr[i]=arr[num-1-i];
        arr[num-1-i]=temp;
    }
    printf("reverse of an array:\n");
     for (i=0;i<num;i++){
        printf("%d ",arr[i]);}
    
        return 0;

}

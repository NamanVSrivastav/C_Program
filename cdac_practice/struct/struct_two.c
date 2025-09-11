#include<stdio.h>
struct Students{
	short int roll_no;
	short int age;
	long double marks1;
	long double marks2;
	};

typedef struct Students std ;

void InputStudentData(std s[],int n);
void OutputStudentData(std s[],int n);


void InputStudentData(std s[],int n){
	for (int i = 0; i<n;i++;){
		printf("\n---rollno---age---marks1---marks2"}
		scanf("%hd %hd %Lf %Lf",&s[i0};

/*1. Write a program to calculate the area & perimeter of a rectangle & print the greater
one.*/
#include<stdio.h>
void main(){
	int A,P,l,b;
	printf("Enter Length of Rectangle:");
	scanf("%d",&l);
	printf("Enter Breath of Rectangle:");
	scanf("%d",&b);
	P=2*(l+b);
	A=l*b;
	if(A>P){
		printf("Area is:%d",A);
    }
	else{
	
		printf("Perimiter is: %d",P);
	}
}

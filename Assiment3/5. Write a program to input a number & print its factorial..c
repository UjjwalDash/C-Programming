/*5. Write a program to input a number & print its factorial.*/
#include<stdio.h>
void main(){
	int n,i,fact=1;
	printf("Enter Value:");
	scanf("%d",&n);
	if(n>0){
		for(i=2;i<=n;i++){
			fact=fact*i;
		}
		printf("Factorial of %d = %d",n,fact);
	}
	else{
		printf("Enter +ve value");
	}
	
}

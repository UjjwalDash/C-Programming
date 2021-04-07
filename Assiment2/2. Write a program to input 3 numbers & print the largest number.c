/*2. Write a program to input 3 numbers & print the largest number.*/
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter number1:");
	scanf("%d",&a);
	printf("Enter number2:");
	scanf("%d",&b);
	printf("Enter number3:");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("%d",a);
		}
		else{
		
			printf("%d",c);
	    }
	}
	else{
		if(b>c){
			printf("%d",b);
		}
		else{
			printf("%d",c);
		}
	}
}


/*3. Write a program to input 2 numbers & print the larger number using conditional
operator.*/
#include<stdio.h>
void main(){
	int a,b;
	printf("Enter Two Numbers:");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("%d",a);
	}
	else{
		printf("%d",b);
	}
}

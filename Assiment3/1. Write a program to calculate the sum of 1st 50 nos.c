/*1. Write a program to calculate the sum of 1st 50 nos*/
#include<stdio.h>
void main(){
	int i=1,s=0;
	while(i<=50){
		s=s+i;
		i++;
	}
	printf("sum=%d",s);	
}

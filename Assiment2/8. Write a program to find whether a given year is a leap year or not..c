/*8. Write a program to find whether a given year is a leap year or not.*/
#include<stdio.h>
void main(){
	int y;
	printf("Enter Year:");
	scanf("%d",&y);
	if(y%4==0){
		printf("Leap Year");
	}
	else{
		printf("Not a leap year");
	}
}

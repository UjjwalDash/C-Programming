/*7. Write a program to input a number & print its sum of its digits.*/
#include<stdio.h>
void main(){
	int n,r,s=0;
	printf("Enter A number:");
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("Sum= %d",s);
}

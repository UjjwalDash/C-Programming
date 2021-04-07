/*3. Write a program to calculate simple and compound interest
respectively*/
#include<stdio.h>
#include<math.h>
void main(){
	float p,r,t,si,ci,a,A;
	printf("Principle Amount:");
	scanf("%f",&p);
	printf("Enter rate:");
	scanf("%f",&r);
	printf("Enter timeperiod in Years:");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("Simple Intrest= %f\n",si);
	a=p*(1+r/100);
	A=pow(a,t);
	ci=A-p;
	printf("Compound Intrest= %f",ci);
	
}

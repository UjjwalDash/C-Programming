/*8. Write a program to convert a given no of days into years, weeks & days.*/
#include<stdio.h>
void main(){
	int d,y,w,D;
	printf("Enter No of days:");
	scanf("%d",&d);
	y=d/365;
	w=(d%365)/7;
	D=d-((y*365)+w*7);
	printf("Years : %d\n",y);
	printf("Weeks : %d\n",w);
	printf("Days : %d\n",D);
}

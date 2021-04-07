/*6. A manufacturer purchases some machinery parts for his new
machine. He has been given a discount of 15 % on the purchase.
Furthermore, he has to pay 6 % of sales tax to import them. Write
a program to calculate & display the sales tax and the total price
paid by him.*/
#include<stdio.h>
void main(){
	float p,d,s,t,T;
	printf("Enter amount:");
	scanf("%f",&p);
	d=p-(0.15*p);
	t=0.06*p;
	T=d+t;
	printf("Sales tax:%f\n",t);
	printf("Total price:%f",T);
	
	
	
}

/*6. A caterer charges a certain amount for each plate, spoon & bowl. If the total no. of
plates is greater than 24, he adds an extra charge of 6% on the amount. If the total no.
of bowls is greater than 12, he adds an extra charge of 3% on the cost. Write a
program to display the total cost.*/
#include<stdio.h>
void main(){
	int c,p,s,b;
	float t=0.0;
	printf("Enter amount:");
	scanf("%d",&c);
	printf("no of plate spoon & bowl:");
	scanf("%d %d %d",&p,&s,&b);
	if(p>24){
		t=t+c+(0.06*c);
		if(b>12){
			t=t+c+(0.03*c);
		}
		printf("%f",t);
	}
	else{
		printf("%f",c);
		
	}
	
}

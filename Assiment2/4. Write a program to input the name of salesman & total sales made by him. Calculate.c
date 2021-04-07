/*4. Write a program to input the name of salesman & total sales made by him. Calculate
& print the commission earned.
TOTAL SALES RATE OF COMMISSION
1-1000          3 %
1001-2000       8 %
2001-3000       12 %
3001 and above  15% */
#include<stdio.h>
void main(){
	char name[10];
	float c,s;
	printf("Enter name:");
	scanf("%s",name);
	printf("Enter Total Sale:");
	scanf("%f",&s);
	if(s>=1 && s<=1000){
		c=0.03*s;
	}
	else if(s>=1001 && s<=2000){
		c=0.08*s;
	}
	else if(s>=2001 && s<=3000){
		c=0.12*s;
	}
	else if(s>=3001){
		c=0.15*s;
	}
	else{
		printf("Wrong Input");
	}
	printf("commision earned:%f",c);
	
}

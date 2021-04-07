/*3. Write a program to read numbers until -1 is encountered. Also calculate the sum &
mean of all positive & negative numbers entered respectively.*/
#include<stdio.h>
void main(){
	int s=0,a,i=1;
	float m;
	do{
		printf("Enter Value:");
		scanf("%d",&a);
		s=s+a;
		i++;
		if(a==-1){
			break;
		}
	}while(a=-1);
	m=(float)s/i;
	printf("Sum= %d\n",s);
	printf("Mean= %d\n",m);
}

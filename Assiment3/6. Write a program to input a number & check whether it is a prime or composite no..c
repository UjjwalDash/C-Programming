/*6. Write a program to input a number & check whether it is a prime or composite no.*/
#include<stdio.h>
#include<math.h>
void main(){
	int i,n;
	printf("Enter Number:");
	scanf("%d",&n);
	for(i=2;i<(int)sqrt(n)+1;i++){
		if(n%i==0){
			printf("Composite Number");
			break;
		}
		else{
			printf("Prime Number");
			break;
		}
		
	}
}

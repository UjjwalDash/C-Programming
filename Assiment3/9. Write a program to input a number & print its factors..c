/*9. Write a program to input a number & print its factors.*/
#include<stdio.h>
void main(){
	int n,i;
	printf("Enter a Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("%d\t",i);
	    }
	}
}

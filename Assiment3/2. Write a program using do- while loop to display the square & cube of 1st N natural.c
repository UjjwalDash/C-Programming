/*2. Write a program using do- while loop to display the square & cube of 1st N natural
numbers.*/
#include<stdio.h>
void main(){
	int N,i=1;
	printf("Enter The no upto which you want to get square and cube:");
	scanf("%d",&N);
	do{
		printf("%d square= %d  cube=%d\n",i,i*i,i*i*i);
		i++;
	}while(i<N);
}

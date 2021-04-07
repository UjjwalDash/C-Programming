/* 4 iii) 2,5,10,17,26….n */
#include<stdio.h>
void main(){
	int n,i,s;
	printf("Enter the Length of series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=i*i+1;
		printf("%d\t",s);
	}
}

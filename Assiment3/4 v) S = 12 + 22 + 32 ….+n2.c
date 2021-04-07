/* 4 v) S = 1^2 + 2^2 + 3^2 ….+n^2*/
#include<stdio.h>
void main(){
	int n,i,s=0;
	printf("Enter Length of series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s+i*i;
	}
	printf("Sum =%d",s);
}

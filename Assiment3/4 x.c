/* 4 x) S = 1 + x + x^2/2 + .......+ x^n/n*/
#include<stdio.h>
#include<math.h>
void main(){
	int i,j,x,n;
	float s=1;
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the length of series:");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		s=s+pow(x,i)/(float)i;
	}
	printf("S= %f",s);
}
	

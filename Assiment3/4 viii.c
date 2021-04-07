/*4 viii) S = 2/5 + 5/9 + 8/13….n*/
#include<stdio.h>
void main(){
	int i,j,n;
	float s=0.0;
	printf("Enter the length of series:");
	scanf("%d",&n);
	for(i=2;i<=3*n+1;i=i+3){
		//printf("%d\t",i);
		for(j=i+3;j<=i+8;j=j+4){
			printf("%d\t",j);
		}
	}
	
}

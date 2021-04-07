#include<stdio.h>
void main(){
	int a,i,j;
	float s=0;
	scanf("%d",&a);
	for(i=2;i<=a+3;i+=3){
		for(j=5;j<=j+4;j+=4){
			printf("%f",i/j);
			s=s+(float)i/j;
		}
	}
}

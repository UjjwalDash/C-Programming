/* 4 ix) S = 1 + ( 1 + 2) + (1+2+3)……..(1+2+3+4…..20)*/
#include<stdio.h>
void main(){
	int i,j,s=0;
	for(i=1;i<=20;i++){
		for(j=1;j<=i;j++){
			s+=j;
		}
	}
	printf("S= %d",s);
}


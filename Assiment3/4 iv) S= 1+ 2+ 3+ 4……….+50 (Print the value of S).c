/*4 iv) S= 1+ 2+ 3+ 4……….+50 (Print the value of S)*/
#include<stdio.h>
void main(){
	int i,s=0;
	for(i=1;i<=50;i++){
		s=s+i;
	}
	printf("Sum =%d",s);
}

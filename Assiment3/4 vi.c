/* 4 vi) P= (1*2) + (2 *3) + (3* 4)+…….(8 *9) +(9 *10)*/
#include<stdio.h>
void main(){
	int i,p=0;
	for(i=1;i<=9;i++){
		p=p+i*(i+1);
		
	}
	printf("P= %d",p);
}

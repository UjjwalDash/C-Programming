/*4 vii)Q= ½ + ¾ +5/6 +….13/14*/
#include<stdio.h>
void main(){
	int i;
	float p=0.0;
	for(i=1;i<=26;i+=2){
		p=p+(i/(float)(i+1));
		
	}
	printf("Q= %f",p);
}

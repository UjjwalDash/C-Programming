/*9. Write a program to accept the no of seconds & convert it into days, hours,
mins & secs.*/
#include<stdio.h>
void main(){
	int s,d,h;
	printf("Enter no of seconds:");
	scanf("%d",&s);
	d=s/86400;
	h=(s/3600);
	printf("Days : %d\n",d);
	printf("Hours : %d\n",h);
	
}

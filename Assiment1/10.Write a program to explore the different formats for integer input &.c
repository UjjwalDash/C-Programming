/*10.Write a program to explore the different formats for integer input &
output respectively.*/
#include<stdio.h>
void main(){
	int a;
	float b;
	long c;
	double d;
	
	printf("Enter an int:");
	scanf("%d",&a);
	printf("int:%d\n",a);
	b=(float)a;
	printf("float:%f\n",b);
	c=(long)a;
	printf("long:%ld\n",c);
	d=(double)a;
	printf("double:%lf",d);
	
}

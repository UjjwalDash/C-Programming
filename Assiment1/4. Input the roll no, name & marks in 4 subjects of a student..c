/*4. Input the roll no, name & marks in 4 subjects of a student.
Calculate and print the total and average respectively.*/
#include<stdio.h>
void main(){
	char name[20];
	int n;
	float m,c,pfps,be,A;
	printf("Name   :");
	fgets(name,20,stdin);
	printf("Roll No:");
	scanf("%d",&n);
	printf("Math:");
	scanf("%f",&m);
	printf("chemistry:");
	scanf("%f",&c);
	printf("pfps:");
	scanf("%f",&pfps);
	printf("Basic Electronics:");
	scanf("%f",&be);
	A=(m+c+pfps+be)/4.0;
	printf("Average=%f",A);
}

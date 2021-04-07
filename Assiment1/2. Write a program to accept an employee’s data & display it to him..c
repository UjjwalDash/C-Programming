/*2. Write a program to accept an employee’s data & display it to him.*/
#include<stdio.h>
void main(){
	char name[20],eid[20],dob[10],jd[10];
	printf("Name   :");
	fgets(name,20,stdin);
	printf("Employ ID:");
	scanf("%s",eid);
	printf("Date of Birth:");
	scanf("%s",dob);
	printf("Join Date:");
	scanf("%s",jd);
	printf("-----------Details----------\n");
	printf("Name : %s",name);
	printf("Employ ID : %s\n",eid);
	printf("Date of Birth : %s\n",dob);
	printf("Join Date : %s",jd);
	
}

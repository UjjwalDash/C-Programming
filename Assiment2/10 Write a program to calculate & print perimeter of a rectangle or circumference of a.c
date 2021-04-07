/*Write a program to calculate & print perimeter of a rectangle or circumference of a
circle or volume of a cuboid using switch case.*/
#include<stdio.h>
void main(){
	int c,l,b,p,l1,b1,h1,v1;
	float r,cp;
	printf("1.perimeter of a rectangl\n");
	printf("2.circumference of a circle\n");
	printf("3.volume of a cuboid\n");
	printf("Enter your choice:");
	scanf("%d",&c);
	switch(c){
		case 1:
			printf("Enter Length Breath:");
			scanf("%d %d",&l,&b);
			p=2*(l+b);
			printf("Perimiter=%d",p);
			break;
		case 2:
			printf("Enter Radius:");
			scanf("%f",&r);
			cp=2*3.14*r;
			printf("Circumference=%f",cp);
			break;
		case 3:
			printf("Enter Length Breath Height:");
			scanf("%d %d %d",&l1,&b1,&h1);
			v1=l1*b1*h1;
			printf("Volume of cuboid=%d",v1);
			break;
		default:
			printf("Wrong Option");
			break;		
	}
}

/*5. Write a program to calculate the volume, surface area and diagonal of a
cuboid.*/
#include<stdio.h>
#include<math.h>
void main(){
	float l,b,h,V,S,d,D;
	printf("Length:");
	scanf("%f",&l);
	printf("Breath:");
	scanf("%f",&b);
	printf("Height:");
	scanf("%f",&h);
	V=l*b*h;
	S=2*(l*b+b*h+l*h);
	d=(l*l+b*b+h*h);
	D=pow(d,0.5);
	printf("Volume:%f\n",V);
	printf("Surface Area:%f\n",S);
	printf("Diagonal:%f",D);
}

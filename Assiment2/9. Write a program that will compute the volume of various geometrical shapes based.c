/*9. Write a program that will compute the volume of various geometrical shapes based
on the user’s choice
i. Vol of a cube
ii. Vol of a cuboid
iii. Vol of a cylinder*/
#include<stdio.h>
void main(){
	int c;
	printf("1. Vol of a cube\n");
    printf("2. Vol of a cuboid\n");
    printf("3. Vol of a cylinder\n");
    printf("Enter your choice:");
    scanf("%d",&c);
    if(c==1){
    	int a,v;
    	printf("Enter side of cube:");
    	scanf("%d",&a);
    	v=a*a*a;
    	printf("Volume Of Cube=%d",v);
	}
	else if(c==2){
		int l,b,h,v1;
		printf("Enter Length Breath Height:");
		scanf("%d %d %d",&l,&b,&h);
		v1=l*b*h;
		printf("Volume of cuboid=%d",v1);
	}
	else if(c==3){
		float r,v2,h1;
		printf("Enter Radius Height");
		scanf("%f %f",&r,&h1);
		v2=3.14*r*r*h1;
		printf("Volume of cylinder=%f",v2);	
	}
	else{
		printf("Wrong Input");
	}
}

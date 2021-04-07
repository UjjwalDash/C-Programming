/*5. Write a program to calculate the wages of a labour
TIME            WAGE
First 10 hrs.   Rs 60
Next 6 hrs.     Rs 15/hr
Next 4 hrs.     Rs 18/hr
Above 10 hrs.   Rs 25/hr*/
#include<stdio.h>
void main(){
	int h,w=0,n,o,m;
	printf("Enter the No of hrs:");
	scanf("%d",&h);
	if(h>10){
		n=h-10;
		if(n>6){
			m=n-6;
			if(m>4){
				o=m-4;
				w=w+o*25;
				printf("%d",w);
			}
			else{
				w=w+m*18;
				printf("%d",w);
			}	
		}
		else{
			w=w+15*n;
			printf("%d",w);
		}		
	}
	else if(h==10){
		w=w+60;
		printf("%d",w);
	}
	else{
		w=0;
		printf("%d",w);
	}

}

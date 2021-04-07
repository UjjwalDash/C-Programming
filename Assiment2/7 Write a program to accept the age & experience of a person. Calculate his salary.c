/*7. Write a program to accept the age & experience of a person. Calculate his salary
based on the given criteria:
AGE EXPERIENCE SALARY
Above 50 experienced 1,60,000
40 <= age <= 50 experienced 1,20,000
30 <= age <= 39 experienced 80,000
25 <= age <= 29 experienced 50,000
25 <= age <= 29 inexperienced 45,000
22 <= age <=24 experienced 30,000
22 <= age <=24 inexperienced 25,000
18 <= age <= 21 inexperienced 20,000
*/
#include<stdio.h>
void main(){
	char e;
	int a,s;
	printf("Experienced y/n:");
	scanf("%c",&e);
	printf("Enter age:");
	scanf("%d",&a);
	if(e=='y'){
		if(a>=40 && a<=50){
			s=120000;
		}
		else if(a>=30 && a<=39){
			s=80000;
		}
		else if(a>=25 && a<=29){
			s=50000;
		}
		else if(a>=22 && a<=24){
			s=30000;
		}
		else if(a>50){
			s=160000;
		}
		printf(" the salery is %d",s);
	}
	else if(e=='n'){
		if(a>=25 && a<=29){
			s=45000;
	    }
	    else if(a>=22 && a<=24){
			s=25000;
	    }
	    else if(a>=18 && a<=21){
	    	s=20000;
		}
		printf(" the salery is %d",s);
	}
	else{
		printf("Wrong Input");
	}
}

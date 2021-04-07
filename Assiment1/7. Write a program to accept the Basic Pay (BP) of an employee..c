/*7. Write a program to accept the Basic Pay (BP) of an employee.
Calculate his HRA, DA, Gross Pay (GP), Net Pay (NP) & Income
Tax (IT).
(Use the following formula to compute
HRA= 15 % of BP
DA= 10% of (BP + HRA)
GP= BP + HRA + DA
Net Pay= Gross Pay – 5 % of DA
IT = 10% of BP)*/
#include<stdio.h>
void main(){
	float bp,hra,da,gp,n,it;
	printf("Enter amount:");
	scanf("%f",&bp);
	hra=0.15*bp;
	da=0.10*(bp+hra);
	gp=bp+hra+da;
	n=gp-(0.05*da);
	it=0.10*bp;
	printf("HRA:%f\n",hra);
	printf("DA:%f\n",da);
	printf("GP:%f\n",gp);
	printf("Net Pay:%f\n",n);
	printf("IT:%f",it);
}

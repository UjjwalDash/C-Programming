/*10 palindrome*/
#include <stdio.h>
void main(){
	int n,rev=0,r,a;
	printf("Enter Any number:");
	scanf("%d",&n);
	a=n;
	while(n>0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(a==rev){
		printf("Palindrome");
	}
	else{
		printf("Not Palindrome");
	}
	
}


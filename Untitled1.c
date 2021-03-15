#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	unsigned long long fact = 1;
	printf("Enter an integer no : ");
	scanf("%d",&n);
	
	if(n<0 || n>=20)
		printf("Error! Factorial of a negative no is exist.");
	else{
		for(i=1;i<20;++i){
			fact = fact * i;
		}
	}
			printf("Factorail of %d = %llu",n,fact);
			
		return 0;
		
}

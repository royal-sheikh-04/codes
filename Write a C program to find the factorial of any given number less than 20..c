#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	unsigned long long fact=1;
	printf("Enter the no: ");
	scanf("%d",&n);
	
	if(n<0 || n>=20)
		printf("Error! this is  ouerflow & exist.");
	else{
		for(i=1;i<20;++i){
			fact = fact*i;
		}
		printf("\nFactorial no is %d = %llu",n,fact);
    }
}

#include<stdio.h>
#include<conio.h>

int main()
{
	int result;
	
	result = getSum();
	
	printf("the result of the %d",result);
	return 0;
}

int getSum()
{
	int a=30,b=60,sum;
	sum=a+b;
	return sum;
}

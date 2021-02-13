#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	a=10,b=20;
	
	printf("the value before of interchange %d %d\n",a,b);
	myswap(a,b);
	
	return 0;
}

void myswap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
	printf("the value after of interchange %d and %d",x,y);
}

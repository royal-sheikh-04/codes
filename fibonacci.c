#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,i,n;
	
	printf("Enter the Number :- ");
	scanf("%d",&n);
	
	printf("%d %d",a,b);
	
	i=2;
	while(i<=n)
	{
		c=a+b;
		printf("%d",c);
		
		a=b;
		b=c;
		i++;
	}
	return 0;
}

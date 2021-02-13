#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,result;
	#ifdef TEMP
	{
		printf("Enter three number :");
		scanf("%d %d %d",a,b,c);
		
		if(b>a)
		{
			a=b;
		}
		if(c>a)
		{
			a=c;
		}
		printf("\nThe largest is: %d",a);
		return 0;
	}
	#else
	{
		
	}
	#endif
	return 0;
}

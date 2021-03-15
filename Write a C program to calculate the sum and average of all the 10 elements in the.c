#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num;
	float total=0.0,avg;
	printf("Enter the value of N");
	scanf("%d",&num);
	int arr[num];
	
	printf("Enter %d number \n",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0;i<num;i++)
	{
		total=total+arr[i];
	}
	
	avg = total/num;
	
	printf("\n sum of all number = %.2f\n",total);
	
	printf("\n Average of all input number = %.2f\n",avg);
}

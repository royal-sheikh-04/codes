#include<stdio.h>
#include<conio.h>

int main()
{
	int m,n,p,q,i,j,k;
	int A[10][10],B[10][10],C[10][10];
	
	printf("Enter the rows and columns of first matrix :");
	scanf("%d %d",&m,&n);
	printf("\nEnter the rows and columns of second matrix :");
	scanf("%d %d",&p,&q);
	
	if(n!=p)
	{
		printf("Cant multiply these matrices");
		return 1;
	}
	
	printf("Enter the elements o first matrix\n");
	for(i=0;i<m;i++)
	    for(j=0;j<n;j++)
	    	scanf("%d",&A[i][j]);
	    	
	printf("Enter the elements of second matrix\n");
	for(i=0;i<p;i++)
		for(j=0;j<q;j++)
			scanf("%d",&B[i][j]);
			
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			C[i][j]=0;
			for(k=0;k<n;k++)
			{
				C[i][j] = C[i][j] + (A[i][k]*B[k][j]);
			}
		}
	}
	
	printf("\nThe result is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf(" %d",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}

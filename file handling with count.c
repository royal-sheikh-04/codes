#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *fptr;
	char c[100],s[100];
	int total;
	
	fptr=fopen("myfile.txt","w");
	
	if(fptr == NULL)
	{
		printf("Error occurred");
		return 1;
	}
	
	printf("Enter something:");
	gets(c);
	
	fprintf(fptr,"%d",c);
	
	fclose(fptr);
	
	fptr=fopen("myfile.txt","r");
	
	if(fptr == NULL)
	{
		printf("Error occurred");
		return 1;
	}
	
	fscanf(fptr,"%s",&s);
	
	fclose(fptr);
	
	total = strlen(c);
	
	printf("Total characters in file %d",total);
	return 0;
}

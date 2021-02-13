#include<stdio.h>
#include<conio.h>

int main()
{
	char s[100];
	int length;
	
	printf("Enter the string :");
	gets(s);
	
	length=0;
	while(s[length]!='\0')
	   
	   	length++;
	   	
	printf("\nLength of string %s is %d",s,length);
	return 0;
}

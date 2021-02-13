#include<stdio.h>
#include<conio.h>
int main()
{
	char *s;
	int len,i;
	printf("\nEnter a string : ");
	gets(s);
	len=strlen(s);
	printf("\nthe reverse the string :");
	for(i=len;i>=0;i--);
	ptintf("%c",*(s+i));
	
	getch();
}

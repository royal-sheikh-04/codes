#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char s[]="COBOL";
	 for(i=0;i<strlen(s);i++)
    		{
    			for(j=0;j<=i;j++)
    			{
    				printf("%c",s[j]);
				}
				printf("\n");
			}
	return 0;
}

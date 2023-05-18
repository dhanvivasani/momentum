#include<stdio.h>

main()

{
	char ch;
	printf("\nenter character value=");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
	{
		printf("%c value is capital letter",ch);
	}
    else if(ch>='a'&& ch<='z')
	{
		printf("%c value is small letter",ch);
	}
	else if (ch>='0' && ch<='9')
	{
		printf("%c value is digit",ch);
	}
	else 
	{
		printf("%c is special character",ch);
	}
		}
		
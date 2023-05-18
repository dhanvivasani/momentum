#include<stdio.h>

main()

{
	int p,q,r,s;
	

	printf("enter value of p");
	scanf("%d",&p);
	printf("enter value of q");
	scanf("%d",&q);
	printf("enter value of r");
	scanf("%d",&r);
	printf("enter value of s");
	scanf("%d",&s);
	
    if(p>q)	
	
	{
		if(p>r)
		{
		  if (p>s)
		  {
		  	printf("p is max");
		  	
			  }	
		else
		{
			printf("r is max");
			
		}
		
	}
	
	else
	{
		if(r>s)
		{
			printf("r is max");
		}
		else
		{
			printf("s is max");
		}
	}
		}	
	
	
	else
	{
		if(q>s)
		
		{
			if(q>s)
			{
				printf("q is max");
			}
			else
			
			{
				printf("s is max");
			}
		}
		else
		{
			if(r>s)
			
			{
				printf("r is max");
			}
			else
			{
				printf("s is max");
			}
		}
	}
	
	
}

  
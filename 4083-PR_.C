#include<stdio.h>
#include<conio.h>

main()

{
  char n;
  clrscr();
  printf("press M\n");
  printf("press T\n");
  printf("press W\n");
  printf("press t\n");
  printf("press F\n");
  printf("press s\n");
  printf("press S\n");
  printf("enter your choice:-\n");
  scanf("%c",&n);

  switch(n)

  {
    case 'M':
	   printf("Monday");
	   break;

    case 'T':
	   printf("Tuesday");
	   break;

    case 'W':
	   printf("Wednesday");
	   break;

    case 't':
	   printf("thursday");
	   break;

    case 'F':
	   printf("Friday");
	   break;

    case 's':
	   printf("saturday");
	   break;

    case 'S':
	   printf("Sunday");
	   break;

  default:
	  printf("plz enter proper choice");


	  }
	  getch();

	  }


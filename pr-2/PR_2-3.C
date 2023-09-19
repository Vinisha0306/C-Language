#include<stdio.h>
#include<conio.h>
main()
{
	char c;

	clrscr();

	printf("Enter..... \n");
	printf("M. Monday\n");
	printf("T. Tuesday\n");
	printf("W. Wenesday\n");
	printf("t. Thursday\n");
	printf("F. Friday\n");
	printf("S. Suturday\n");
	printf("s. Sunday\n");
	printf("Enter your choice:");
	scanf("%c",&c);

	switch(c)
	{
		case 'M':
			printf("Monday");
			break;
		case 'T':
			printf("Tuesday");
			break;
		case 'W':
			printf("Wenesday");
			break;
		case 't':
			printf("Thursday");
			break;
		case 'F':
			printf("Friday");
			break;
		case 'S':
			printf("Saturday");
			break;
		case 's':
			printf("Sunday");
			break;
	}

	getch();
}
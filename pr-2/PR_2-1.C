#include<stdio.H>
#include<conio.h>
main()
{
	char n;
	clrscr();

	printf("Enter any key:");
	scanf("%c",&n);

	if((n>='a' && n<='z') || (n>='A' && n<='Z'))
	{
		printf("This key is Alphabet");
	}

	else if(n>='0' && n<='9')
	{
		printf("This key is Digit");
	}

	else
	{
		printf("This key is Special character");
	}
	getch();
}

#include<stdio.h>
#include<conio.h>
main()
{
	int n;

	clrscr();

	printf("Enter any number:");
	scanf("%d",&n);

	(n%2==0)
		? printf("This number is Even")
		: printf("This number is odd");

	getch();
}

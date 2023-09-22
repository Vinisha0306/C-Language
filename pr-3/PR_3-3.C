#include<stdio.h>
#include<conio.h>
main()
{
	int i,last,first,sum=0;
	
	clrscr();

	printf("Enter any number:");
	scanf("%d",&i);

	last=i%10;

	while(i>=10)
	{
	
		i=i/10;
	
	}
	
	first=i;
	sum=first+last;
	
	printf("first and last number sum:%d",sum);

	getch();
}

#include<stdio.h>
#include<conio.h>
main()
{
	int i,count=0;

	clrscr();

	printf("Enter any number:");
	scanf("%d",&i);

	while(i!=0)
	{
		i=i/10;
		count++;
	}

	printf("total number of digit:%d",count);

	getch();

}
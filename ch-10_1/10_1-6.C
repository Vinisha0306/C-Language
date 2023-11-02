#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;

	clrscr();

	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			(j%2==1)
			       ? printf("1 ")
			       : printf("0 ");
		}

		printf("\n");
	}

	getch();
}

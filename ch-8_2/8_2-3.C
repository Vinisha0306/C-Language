#include<stdio.h>
#include<conio.h>
main()
{
	int v=1,n;

	clrscr();

	printf("Enter any number:");
	scanf("%d",&n);

	do
	{
		if(v%2==0)

			printf("%d ",v);
			v++;

	}while(v<=n);

	getch();
}

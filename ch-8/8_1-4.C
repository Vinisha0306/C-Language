#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,n;

	clrscr();

	printf("Enter any number:");
	scanf("%d",&n);

	while(a<=n)
	{
		printf("%d\n",n--);
		n--;
	}

	getch();
}

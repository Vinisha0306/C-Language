#include<stdio.h>
#include<conio.h>
main()
{
	int bill,charge,unit;

	clrscr();

	printf("Enter unit:");
	scanf("%d",&unit);

	if(unit<50)
	{
		printf("50 ...");
		charge=unit*0.50;
		bill=charge*0.20;
		printf("Bill:%d",bill+charge);
	}

	else if(unit<150)
	{
		printf("150 ...");
		charge=(25+(unit-50)*0.75);
		bill=charge*0.20;
		printf("\nBill:%d",bill+charge);
	}

	else if(unit<250)
	{
		printf("250 ...");
		charge=(100+(unit-150)*1.20);
		bill=charge*0.20;
		printf("Bill:%d",bill+charge);
	}

	else
	{
		printf("250 Up...");
		charge=(220+(unit-250)*1.50);
		printf("%d",charge);
		bill=charge*0.20;
		printf("\nBill:%d",bill+charge);
	}

	getch();
}

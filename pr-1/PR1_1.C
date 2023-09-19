#include<stdio.h>
#include<conio.h>
main()
{
	float c;
	clrscr();
	printf("Enter the temperature of celsius:");
	scanf("%d",&c);
	printf("the temperature in fahrenheit:%.2f",(c*9/5)+32);
	getch();
}

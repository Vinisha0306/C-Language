#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("(%d+%d)^3 formula's answer:%d",a,b,(a+b)*((a*a)+(2*a*b)+(b*b)));
	getch();
}
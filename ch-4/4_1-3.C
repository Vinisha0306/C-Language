#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("enter number a:");
	scanf("%d",&a);
	printf("enter number b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a:%d\nb:%d",a,b);
	getch();
}

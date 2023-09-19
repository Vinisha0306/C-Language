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
	a=a*b;
	b=a/b;
	a=a/b;
	printf("A:%d\nB:%d",a,b);
	getch();
}

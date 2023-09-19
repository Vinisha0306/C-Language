#include<stdio.h>
#include<conio.h>
main()
{
	int a=12,b=6;
	clrscr();
	printf("Addition of %d and %d is %d\n",a,b,a+b);
	printf("Subtraction of %d and %d is %d\n",a,b,a-b);
	printf("Multipliction of %d and %d is %d\n",a,b,a*b);
	printf("Division of %d and %d is %d\n",a,b,a/b);
	printf("modulo of %d and %d is %d\n\n",a,b,a%b);
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n",a,b,a/b);
	printf("%d %% %d = %d\n",a,b,a%b);
	getch();
}

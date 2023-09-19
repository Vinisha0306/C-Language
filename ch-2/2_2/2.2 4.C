#include<stdio.h>
#include<conio.h>
main()
{
 float p,n,r;
 clrscr;
 printf("enter p : \n");
 scanf("%f",&p);
 printf("enter r :\n");
 scanf("%f",&r);
 printf("enter n :\n");
 scanf("%f",&n);
 printf("simple interest : %f",p*r*n/100);
 getch();
}
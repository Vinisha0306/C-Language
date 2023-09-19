#include<stdio.h>
#include<conio.h>
main()
{
      int c,hra,ta,da;
      clrscr();
      printf("Enter base salary:");
      scanf("%d",&c);
      hra=c*0.10;
      da=c*0.05;
      ta=c*0.08;
      printf("Rs.%d",c+hra+ta+da);
      getch();

}
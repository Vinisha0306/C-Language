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
     printf("\nAddition of %d and %d Ans.%d\n",a,b,a+b);
     printf("Subtraction of %d and %d Ans.%d\n",b,a,b-a);
     printf("Multiplication of %d and %d Ans.%d\n",a,b,a*b);
     printf("Divsion of %d and %d Ans.%d\n",b,a,b/a);
     printf("Modurs of %d and %d Ans.%d\n",b,a,b%a);
     getch();
}
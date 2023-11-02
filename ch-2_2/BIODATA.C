#include<stdio.h>
#include<conio.h>

main()
{
     int age,w;
     char a;
     long int Mn;
     float b;
     clrscr();
     printf("name:vinisha lathiya");
     printf("\nEnter your age:");
     scanf("%d",&age);
     printf("\nEnter your Blood group:");
     scanf(" %c",&a);
     printf("\nEnter your Mobile number:");
     scanf("%ld",&Mn);
     printf("\nEnter your hight:");
     scanf("%f",&b);
     printf("\nEnter your weigth:");
     scanf("%d",&w);

     printf("your age:%d\n",age);
     printf("your Blood group:%c\n",a);
     printf("your Mobile number:%ld\n",Mn);
     printf("your hight:%.2f\n",b);
     printf("your weigth:%d\n",w);
     getch();
}
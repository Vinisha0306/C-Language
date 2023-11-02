#include<stdio.h>
#include<conio.h>

main()
{
  int a,b,c;

  clrscr();
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	if(a==b && b==c && c==a)
	{
	  printf("All are same");
	}
	else if(a==b)
	{
	  if(a<c)
	  {
	    printf("A and B are small");
	  }
	  else
	  {
	  printf("C is small");
	  }
	}
	else if(b==c)
	{
	  if(b<a)
	  {
	    printf("B and C are small");
	  }
	  else
	  {
	  printf("A is small");
	  }
	}
	else if(a==c)
	{
	  if(a<b)
	  {
	    printf("A and C are small");
	  }
	  else
	  {
	  printf("B is small");
	  }
	}
	else if(a<b)
	{
	  if(a<c)
	  {
	   printf("A is small");
	  }
	  else
	  {
	   printf("Cis small");
	  }
	}
	else
	{
	 if(b<c)
	 {
	  printf("B is small");
	 }
	 else
	 {
	  printf("C is small");
	 }
	}


  getch();
}

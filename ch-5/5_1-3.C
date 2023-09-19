#include<stdio.h>
#include<conio.h>
main()
{
      char a;
   clrscr();

      printf("Enter any characater:");
      scanf("%c",&a);

      if(a=='a'||a=='i'||a=='o'||a=='u'||a=='e'||a=='A'||a=='I'||a=='O'||a=='U'||a=='E')
      {
	printf("This characater is Vowel");
      }
      else
      {
	printf("This characater is consonent");
      }
   getch();
}
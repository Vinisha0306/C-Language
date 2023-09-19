#include<stdio.h>
#include<conio.h>

main()
{
    int j,k,l,m,n;
    clrscr();
        printf("Enter J:");
        scanf("%d",&j);
        printf("Enter K:");
        scanf("%d",&k);
        printf("Enter L:");
        scanf("%d",&l);
        printf("Enter M:");
        scanf("%d",&m);
        printf("Enter N:");
        scanf("%d",&n);
    
        if(j>k)
        {
            if(j>l)      
            {
                 if(j>m)
                 {
                      if(j>n)
                      {
                          printf("J is big");
                      }
                      else
                      {
                          printf("N is big");
                      } 
                 }
                 else
                 {
                      if(m>n)
                      {
                          printf("M is big");
                      }
                      else
                      {
                          printf("N is big");
                      } 
                 }
            }
            else
            {
                 if(l>m)
                 {
                      if(l>n)
                      {
                          printf("L is big");
                      }
                      else
                      {
                          printf("N is big");
                      } 
                 }
                 else
                 {
                      if(m>n)
                      {
                          printf("M is big");
                      }
                      else
                      {
                          printf("N is big");
                      } 
                 }
            }  
        }
        else
        {
        if(k>l)      
            {
                 if(k>m)
                 {
                      if(k>n)
                      {
                          printf("K is big");
                      }
                      else
                      {
                          printf("N is big");
                      } 
                 }
                 else
                 {
                      if(m>n)
                      {
                          printf("M is big");
                      }
                      else
                      {
                          printf("N is big");
                      } 
                 }
            }
            else
            {
                 if(l>m)
                 {
                      if(l>n)
                      {
                          printf("L is big");
                      }
                      else
                      {
                          printf("N is big");
                      } 
                 }
                 else
                 {
                      if(m>n)
                      {
                          printf("M is big");
                      }
                      else
                      {
                          printf("N is big");
                      } 
                 }
            }  
        }
        
    getch();
}
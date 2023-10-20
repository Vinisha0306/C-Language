#include<stdio.h>

int main()
{
    char A[20],rev[20];
    int count=0,a=0,b;

    printf("Enter any word:");
    scanf("%s",&A);

    for(int i=0;A[i]!='\0';i++)
    {
        count++;
    }

    for(int i=count-1;i>=0;i--)
    {
        rev[a]=A[i];
        a++;
    }

    for(int i=0;i<=count;i++)
    {
        if(A[i]==rev[i])
        {
            b=1;
        }
        else
        {
            b=0;
        }
    }

    if(b==1)
    {
        printf("Given string is palindrom");
    }
    else
    {
        printf("Given string is not palindrom");
    }
        
        

    return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
    char email[20]="admin1342@gmail.com",password[20]="rmjnjhsgjmvjk",email1[20],password1[20];
    int a=0,b=0;

    printf("Enter your email:");
    gets(email1);
    printf("Enter your password:");
    gets(password1);

    for(int i=0;email[i]!='\0';i++)
    {
        if(email[i]==email1[i])
        {
            a=1;
        }
        else
        {
            a=0;
        }
    }

    for(int i=0;password[i]!='\0';i++)
    {
        if(password[i]==password1[i])
        {
            b=1;
        }
        else
        {
            b=0;
        }
    }

    if(a==1 && b==1)
    {
        printf("You login successful");
    }
    else
    {
        printf("login failed");
    }


    return 0;
}
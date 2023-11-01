#include<stdio.h>

int main()
{
    int count=0,a=0,b=0,c=0,d=0;
    char password[20];

    printf("Create your password:");
    scanf("%s",&password);

    for(int i=0;password[i]!='\0';i++)
    {
        count++;
    }

    for(int i=0;i<count;i++)
    {
        if(count>6)
        {
            if (password[i]>='A' && password[i]<='Z')
            {
                a=1;
            }
            else if (password[i]>='a' && password[i]<='z')
            {
                b=1;
            }
            else if (password[i]>='0' && password[i]<='9')
            {
                c=1;
            }
            else
            {
                d=1;
            }
            
        }
        else
        {
            printf("Your password is not strong\n");
        }
    }

    if(a==1 && b==1 && c==1 && d==1)
    {
        printf("Your password is strong");
    }
    else
    {
        printf("your password is not strong");
    }

    return 0;
}

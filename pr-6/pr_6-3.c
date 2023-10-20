#include<stdio.h>

int main()
{
    char name[20],name1[20];
    int a=0;

    printf("Enter first string:");
    scanf("%s",&name);
    printf("Enter second string:");
    scanf("%s",&name1);

    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]==name1[i])
        {
            a=1;
        }
        else
        {
            a=0;
        }
    }

    if(a==1)
    {
        printf("compares successful");
    }
    else
    {
        printf("compares failed");
    }
        
    return 0;
}

#include<stdio.h>

int main()
{
    char name[50];

    printf("Enter your name :");
    scanf("%[^\n]",&name);

    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]>='A' && name[i]<='Z')
        {
            name[i]+=32;
        }
        else
        {
            name[i]-=32;
        }

    }

    printf("\nname: %s",name);

    return 0;
}

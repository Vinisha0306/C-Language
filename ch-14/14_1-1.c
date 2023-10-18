#include<stdio.h>

int main()
{
    char name[50];

    printf("Enter your name in lower case:");
    scanf("%[^\n]",&name);

    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]>='a' && name[i]<='z')
        {
            name[i]-=32;
        }
    }

    printf("\nUpper case name: %s",name);

    return 0;
}

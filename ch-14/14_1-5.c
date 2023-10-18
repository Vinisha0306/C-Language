#include<stdio.h>

int main()
{
    char name[50];

    printf("Enter any word:");
    scanf("%[^\n]",name);

    for(int i=0; name[i]!='\0' ; i++)
    {
        if(name[i]>='A' && name[i]<='Z')
        {
                name[i]+=32;
        }
    }

    for(int i=0 ; name[i]!='\0' ; i++)
    {
        if(name[i]==32)
        {
            if(name[i+1]>='a' && name[i+1]<='z')
            {
                name[i+1]-=32;
            }

        }
    }

    printf("%s",name);
    return 0;
}

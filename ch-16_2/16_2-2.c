#include <stdio.h>

void inputString(char name[])
{
    gets(name);
}

int lenth(char name[])
{
    int count=0;

    for(int i=0;name[i]!=NULL;i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];

    printf("Enter name :");
    inputString(name);

    int size=lenth(name);

    printf("\n\tstring lenth:%d",size);

    return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
    int count=0;
    char name[20];
    char *ptr[20];

    printf("Enter string:");
    gets(name);
    
    for(int i=0;name[i]!='\0';i++)
    {
        ptr[i]=&name[i];
    }

    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }

    printf("The length of a string is:%d",count);

    return 0;
}

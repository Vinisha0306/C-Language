#include<stdio.h>
#include<string.h>

int main()
{
    char string[20];
    char *ptr[20];
    int count=0;
    
    printf("Enter any string:");
    gets(string);
    
    for(int i=0;string[i]!=NULL;i++)
    {
        ptr[i]=&string[i];
    }
    
    for(int i=0;ptr[i]!=NULL;i++)
    {
        count++;
    }
    
    printf("\n\nThe length of a string: %d",count);
    
    return 0;
}
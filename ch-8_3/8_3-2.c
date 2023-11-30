#include<stdio.h>

int main()
{
    int fact=1,n;
    
    printf("Enter any number:");
    scanf("%d",&n);
    
    printf("\nNumber:");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
        fact*=i;
    }
    
    printf("\n\nThe factorial of all numbers:%d",fact);
    
    return 0;
}
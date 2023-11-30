#include<stdio.h>

int main()
{
    int sum=0,n;
    
    printf("Enter any number:");
    scanf("%d",&n);
    
    printf("\nNumber:");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum+=i;
    }
    
    printf("\n\nThe sum of all numbers:%d",sum);
    
    return 0;
}
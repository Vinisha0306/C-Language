#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter array size:");
    scanf("%d",&n);
    
    int a[n];
    
    printf("\n\nEnter Array A.....\n");
    
    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    
    printf("\n\nThe square of array:");
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]*a[i]);
    }
}

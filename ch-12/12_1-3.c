#include<stdio.h>

int main()
{
    int n,sum=0;

    printf("Enter array size:");
    scanf("%d",&n);

    int a[n],b[n],c[n];
    
    printf("\n\nEnter array A.....\n");
    for(int i=0; i<n; i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("\n\nEnter array B.....\n");
    for(int i=0; i<n; i++)
    {
        printf("Enter b[%d]:",i);
        scanf("%d",&b[i]);
    }

    for(int i=0; i<n; i++)
    {
        c[i]=a[i]+b[i];
    }
    
    printf("\n\nsum of array A and array B\n");
    for(int i=0; i<n; i++)
    {
        printf("c[%d]:%d\n",i,c[i]);
    }

    return 0;
}
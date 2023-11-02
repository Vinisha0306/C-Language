#include<stdio.h>

int main()
{
    int n,n2;

    printf("Enter array A size:");
    scanf("%d",&n);

    int a[n];

    printf("\n\nEnter array A.....\n");
    for(int i=0; i<n; i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("\nEnter array B size:");
    scanf("%d",&n2);
    
    int b[n];

    printf("\n\nEnter array B.....\n");
    for(int i=0; i<n2; i++)
    {
        printf("Enter b[%d]:",i);
        scanf("%d",&b[i]);
    }
    
    int c[n+n2];

    for(int i=0; i<n; i++)
    {
        c[i]=a[i];
    }

    for(int i=0; i<n2; i++)
    {
        c[i+n]=b[i];
    }

    printf("Array c is:");
    for(int i=0; i<n+n2; i++)
    {
        printf("%d ",c[i]);
    }

    return 0;
}
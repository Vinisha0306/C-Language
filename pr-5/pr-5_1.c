#include<stdio.h>

int main()
{
    int n;

    printf("Enter array size:");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("Negative elementes from an array:");

    for(int i=0;i<n;i++)
    {
        (a[i]<0)
            ? printf("%d ",a[i])
            : printf("");
    }

    return 0;
}
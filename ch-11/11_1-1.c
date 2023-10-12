#include<stdio.h>

int main()
{
    int n;

    printf("Enter array size:");
    scanf("%d",&n);

    int a[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i++)
    {
        printf("a[%d]:%d\n",i,a[i]);
    }

    printf("array size : %d",n);

    return 0;
}
#include<stdio.h>

int main()
{
    int n,sum=0;

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
        sum+=a[i];
    }

    printf("average of array : %.2f",(float)sum/n);

    return 0;
}
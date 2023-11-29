#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter array's size:");
    scanf("%d",&n);
    
    int a[n];
    int *p1[n],**p2[n];
    
    printf("\n\nEnter array elements:\n");
    
    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        p1[i]=&a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        p2[i]=&p1[i];
    }
    
    printf("\n\nReverse array elements:\n");
    
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",**p2[i]);
    }
    
    return 0;
}
#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter array's size:");
    scanf("%d",&n);
    
    int k=n-1;
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
        p2[k]=&p1[i];
        k--;
    }
    printf("array ");
    printf("\n\nReverse array elements:\n");
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",**p2[i]);
    }
    
    return 0;
}
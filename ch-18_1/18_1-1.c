#include<stdio.h>

int main()
{
    int n;

    printf("Enter array size:");
    scanf("%d",&n);

    int a[n],*ptr[n];

    for(int i=0;i<n;i++)
    {    
        printf("Enter array[%d]:",i);
        scanf("%d",&a[i]);
        ptr[i]=&a[i];
    }

    printf("Square of each element:\n");

    for(int i=0;i<n;i++)
    {
        printf("%d,",(*ptr[i])*(*ptr[i]));
    }

    return 0;
}

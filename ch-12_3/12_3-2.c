#include<stdio.h>

int main()
{
    int r,co;

    printf("Enter array row size:");
    scanf("%d",&r);
    printf("Enter array column size:");
    scanf("%d",&co);

    int a[r][co],b[r][co],c[r][co];

    printf("\n\nEnter Array A......\n");

    for(int i=0; i<r; i++)
    {
        for(int j=0;j<co;j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }    
    }
    
    printf("\n\nEnter Array B......\n");

    for(int i=0; i<r; i++)
    {
        for(int j=0;j<co;j++)
        {
            printf("Enter b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }    
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0;j<co;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    
    printf("\n\nArray C:\n\n");
    
    for(int i=0; i<r; i++)
    {
        for(int j=0;j<co;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
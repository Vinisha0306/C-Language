#include<stdio.h>

int main()
{
    int r,c,n,sum=0;

    printf("Enter array row size:");
    scanf("%d",&r);
    printf("Enter array column size:");
    scanf("%d",&c);

    n=r*c;

    int a[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }    
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d]:%d\n",i,j,a[i][j]);
        }
    }

    printf("average of array : %.2f",(float)sum/n);

    return 0;
}
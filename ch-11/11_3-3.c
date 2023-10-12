#include<stdio.h>

int main()
{
    int n,sum=0;

    printf("Enter array row & column size:");
    scanf("%d",&n);

    int a[n][n];

    printf("\n\nEnter array A......\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nDiagonal elements......\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                printf("%d ",a[i][j]);
                sum+=a[i][j];
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nDiagonal matrix sum:%d",sum);

    return 0;
}

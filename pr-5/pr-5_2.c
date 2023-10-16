#include<stdio.h>

int main()
{
    int r,c,max;

    printf("Enter array Row:");
    scanf("%d",&r);

    printf("Enter array column:");
    scanf("%d",&c);

    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    max=a[0][0];

    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
        printf("\n");
    }

    printf("The largest elements is:%d",max);

    return 0;
}
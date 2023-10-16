#include<stdio.h>

main()
{
    int r,c;

    printf("Enter array row size:");
    scanf("%d",&r);
    printf("Enter array column size:");
    scanf("%d",&c);

    int a[r][c];

    printf("\n\nEnter array a......\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMatrix.....\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[j][i]);   
        }
        printf("\n");
    }

    return 0;
}
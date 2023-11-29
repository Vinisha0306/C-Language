#include<stdio.h>

void arraycube(int *a)
{
    (*a)=(*a)*(*a);
}

int main()
{
    int n;

    printf("Enter array size:");
    scanf("%d",&n);

    int array[n][n];

    printf("\n\nEnter array's elements:\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("array[%d][%d]:",i,j);
            scanf("%d",&array[i][j]);
        }
    }

    printf("cubes of all elements:");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arraycube(array[i][j]);
            printf("%d",array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

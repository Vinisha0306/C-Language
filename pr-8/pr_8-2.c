#include<stdio.h>

void cube(int n,int a[n][n])
{
int *ptr[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            ptr[i][j]=&a[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",(*ptr[i][j])*(*ptr[i][j])*(*ptr[i][j]));
        }
        printf("\n");
    }

}

int main()
{
    int n;
    
    printf("Enter array size:");
    scanf("%d",&n);
    
    int a[n][n];
    int *ptr[n][n];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    cube(n,a);
   
    return 0;
}
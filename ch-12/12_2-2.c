#include<stdio.h>

int main()
{
    int y1,y2,size;
    
    printf("Enter first year:");
    scanf("%d",&y1);
    
    printf("Enter last year:");
    scanf("%d",&y2);
    
    size=(y2-y1)/4+1;
    
    int a[size],index=0;
    
    for(int i=y1;i<=y2;i++)
    {
        if(i%4==0)
        {
            a[index]=i;
            index++;
        }
    }
    
    printf("\n\nThe array is:");
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
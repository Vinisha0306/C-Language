#include<stdio.h>

void cube(int a)
{
    printf("cube of %d : %d",a,a*a*a);
}

int main()
{
    int a;

    printf("Enter any number:");
    scanf("%d",&a);

    cube(a);
    
    return 0;
}

#include<stdio.h>

int main()
{
    int a,b,*ptra,*ptrb;

    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    ptra=&a;
    ptrb=&b;

    printf("Before swapping: \na: %d \nb: %d\n\n",a,b);

    *ptra=*ptra+*ptrb;
    *ptrb=*ptra-*ptrb;
    *ptra=*ptra-*ptrb;

    printf("After swapping: \na: %d\nb: %d",*ptra,*ptrb);

    return 0;
}

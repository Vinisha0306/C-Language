#include<stdio.h>

int input(int a)
{
    printf("Enter any number:");
    scanf("%d",&a);
    return a;
}

int bi(int a)
{
    int b=0,bin=0,p=1;
    while(a)
    {
    
        b=a%2;
        a/=2;
        bin=bin+(b*p);
        p=p*10;
    }
    return bin;
}

int main()
{
    int a,ans;
    a=input(a);
    ans=bi(a);
    printf("The binary value is:%d",ans);
}
#include<stdio.h>

int input(int a)
{
    printf("\nEnter A:");
    scanf("%d",&a);
    return a;
}

int inputb(int b)
{
    printf("\nEnter B:");
    scanf("%d",&b);
    return b;
}

int sum(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

int div(int a,int b)
{
    return a/b;
}

int mod(int a,int b)
{
    return a%b;
}


int main()
{
    int a,b,c,ans;
    
    while(c!=0)
    {

    printf("\nEnter.....\n\n");
    printf("1) Addition\n");
    printf("2) Subtraction\n");
    printf("3) Multiplication\n");
    printf("4) Division\n");
    printf("5) Modulus\n");
    printf("Enter 0 for Exit\n\n");
    printf("Enter your choice:");
    scanf("%d",&c);
    
        switch(c)
        {
        case 1: 
            a=input(a);
            b=inputb(b);
            ans=sum(a,b);
            printf("\n\n\tAddition:%d",ans);
            break;
            
        case 2: 
            a=input(a);
            b=inputb(b);
            ans=sub(a,b);
            printf("\n\n\tSubtraction:%d",ans);
            break;
            
        case 3: 
            a=input(a);
            b=inputb(b);
            ans=mul(a,b);
            printf("\n\n\tMultiplication:%d",ans);
            break;
            
        case 4: 
            a=input(a);
            b=inputb(b);
            ans=div(a,b);  
            printf("\n\n\tDivision:%d",ans);  
            break;    
            
        case 5: 
            a=input(a);
            b=inputb(b);
            ans=mod(a,b);
            printf("\n\n\tModulus:%d",ans);
            break;

        }
    }
    return 0;
}

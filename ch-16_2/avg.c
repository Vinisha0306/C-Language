#include<stdio.h>

int input()
{
    int n;
    scanf("%d",&n);

    return n;
}

void arrayinput(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
}

void arrayoutput(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("array %d : %d\n",i,a[i]);
    }
}

int arraysum(int a[],int n)
{
    printf("\n\n --:  Array input  :-- \n\n ");
    arrayinput(a,n);
    printf("\n\n --:  Array output  :-- \n\n ");
    arrayoutput(a,n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }

    return sum;
}

int arrayavg(int a[],int n)
{
    int sum;
    printf("\n\n --:  Array input  :-- \n\n ");
    arrayinput(a,n);
    printf("\n\n --:  Array output  :-- \n\n ");
    arrayoutput(a,n);
    sum=arraysum(a,n);

    return sum/n;
}

int main()
{
    int size,avg;

    printf("Enter array size:");
    size=input();

    int a[size];

    avg=arrayavg(a,size);

    printf("\n\nThe sum of an array : %d",avg);

    return 0;
}

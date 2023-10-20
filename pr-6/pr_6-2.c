#include<stdio.h>

int main()
{
    char A[20];
    int count=0,a=1;

    printf("Enter any string");
    scanf("%s",&A);

    for(int i=0;A[i]!='\0';i++)
    {
        count++;
    }

    for(int i=0;i<count;i++)
    {
        a=1;
        for(int j=i+1;j<count;j++)
        {
            if(A[i]==A[j])
            {
                a++;
                A[j]='\0';
            }
            else
            {
                a=1;
            }
        }

        printf("%c=%d\n",A[i],a);
    }

    return 0;
}

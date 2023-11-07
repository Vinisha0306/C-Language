#include<stdio.h>

int main()
{
    int a=10;

    printf("Int \t: %lu\n",sizeof(int));
    printf("Int A \t: %lu\n",sizeof(a));
    printf("Int 10 \t: %lu\n",sizeof(10));
    printf("float \t: %lu\n",sizeof(float));
    printf("char \t: %lu\n",sizeof(char));
    printf("long int \t: %lu\n",sizeof(long int));
    printf("long long Int \t: %lu\n",sizeof(long long int));

    int array[20]= {10,20,30,40,50} ;

    printf("Array \t: %zu\n",sizeof(array));

    char string[20]="vinisha0306";

    printf("char\t: %d",sizeof(string));

    int ans=sizeof(array)/sizeof(array[0]);

    printf("\n\narray size\t: %d",ans);
    return 0;
}

#include<stdio.h>

int main()
{
    int a=100,*ptr;
    ptr=&a;

    printf("A nomal value:%d\n",a);
    printf("A pointer value:%d\n",*ptr);
    printf("A address:%u\n\n",&a);

    a=50;

    printf("A nomal value:%d\n",a);
    printf("A pointer value:%d\n",*ptr);
    printf("A address:%u\n\n",&a);

    *ptr=25;

    printf("A nomal value:%d\n",a);
    printf("A pointer value:%d\n",*ptr);
    printf("A address:%u\n\n",&a);

    return 0;
}

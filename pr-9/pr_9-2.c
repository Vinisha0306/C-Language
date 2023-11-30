#include<stdio.h>

struct student{
    int rn,cm,mm,pm;
    char name[20];
};

int main()
{
    int n;
    float pr=1,total;
    
    printf("Enter number of student:");
    scanf("%d",&n);
    struct student s[n];
    
    for(int i=0;i<n;i++)
    {
        printf("Enter Roll Number:");
        scanf("%d",&s[i].rn);
        printf("Enter Name:");
        scanf(" %s",&s[i].name);
        printf("Enter chemistry marks:");
        scanf("%d",&s[i].cm);
        printf("Enter mathematics marks:");
        scanf("%d",&s[i].mm);
        printf("Enter physics marks:");
        scanf("%d",&s[i].pm);
        printf("\n");
    }
    
    for(int i=0;i<n;i++)
    {
        total=s[i].cm+s[i].mm+s[i].pm;
        pr=(total/300)*100;
        printf("%s(%d)\n",s[i].name,s[i].rn);
        printf("Chemistry = %d \n",s[i].cm);
        printf("Mathematics = %d \n",s[i].mm);
        printf("physics = %d \n",s[i].pm);
        printf("Total = %d/300 \n",s[i].cm+s[i].mm+s[i].pm);
        printf("Percent = %.2f",pr);
        printf("\n\n");
    }
    
    return 0;
}

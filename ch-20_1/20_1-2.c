#include<stdio.h>
#include<string.h>

struct employee{
    int id,age,exp;
    char name[20],role[20],city[20], cname[20];
};

int main()
{
    int n;
    
    printf("Enter number of employee:");
    scanf("%d",&n);
    
    struct employee s[n];
    
    for(int i=0;i<n;i++)
    {
        printf("Enter employee ID:");
        scanf("%d",&s[i].id);
        printf("Enter employee Name:");
        scanf(" %[^\n]",&s[i].name);
        printf("Enter employee Age:");
        scanf("%d",&s[i].age);
        printf("Enter employee role:");
        scanf(" %[^\n]",&s[i].role);
        printf("Enter employee city:");
        scanf(" %[^\n]",&s[i].city);
        printf("Enter employee experience:");
        scanf("%d",&s[i].exp);
        printf("Enter employee company name:");
        scanf(" %[^\n]",&s[i].cname);
    }
    printf("|\t--\t|\t----\t|\t---\t|\t------\t|\t----\t|\t--------\t|\t------\t|\n");
    printf("|\tID\t|\tNAME\t|\tAGE\t|\tROLE\t|\tCITY\t|\tEXP\t|\tC . NAME\t|\n");
    printf("|\t--\t|\t----\t|\t---\t|\t------\t|\t----\t|\t--------\t|\t------\t|\n");
    
    for(int i=0;i<n;i++)
    {
        printf("|\t%d\t|\t%s\t|\t%d\t|\t%s\t|\t%s\t|\t%d\t|\t%s\t|\n",s[i].id,s[i].name,s[i].age,s[i].role,s[i].city,s[i].exp, s[i].cname);
        printf("|\t--\t|\t----\t|\t---\t|\t------\t|\t----\t|\t--------\t|\t------\t|\n");
    }
    return 0;
}
#include<stdio.h>
#include<string.h>

struct student{
    int id,age,standard;
    char name[20],course[20],city[20], school[20];
};

int main()
{
    int n;
    
    printf("Enter number of students:");
    scanf("%d",&n);
    
    struct student s[n];
    
    for(int i=0;i<n;i++)
    {
        printf("Enter student ID:");
        scanf("%d",&s[i].id);
        printf("Enter student Name:");
        scanf(" %[^\n]",&s[i].name);
        printf("Enter student Age:");
        scanf("%d",&s[i].age);
        printf("Enter student course:");
        scanf(" %[^\n]",&s[i].course);
        printf("Enter student city:");
        scanf(" %[^\n]",&s[i].city);
        printf("Enter student standard:");
        scanf("%d",&s[i].standard);
        printf("Enter student school:");
        scanf(" %[^\n]",&s[i].school);
    }
    printf("|\t--\t|\t----\t|\t---\t|\t------\t|\t----\t|\t--------\t|\t------\t|\n");
    printf("|\tID\t|\tNAME\t|\tAGE\t|\tCOURSE\t|\tCITY\t|\tSTANDARD\t|\tSCHOOL\t|\n");
    printf("|\t--\t|\t----\t|\t---\t|\t------\t|\t----\t|\t--------\t|\t------\t|\n");
    
    for(int i=0;i<n;i++)
    {
        printf("|\t%d\t|\t%s\t|\t%d\t|\t%s\t|\t%s\t|\t%d\t|\t%s\t|\n",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].standard, s[i].school);
        printf("|\t--\t|\t----\t|\t---\t|\t------\t|\t----\t|\t--------\t|\t------\t|\n");
    }
    return 0;
}
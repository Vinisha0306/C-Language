#include<stdio.h>

int main()
{
    FILE *fp;

    char email[50],psw[30];

    fp= fopen("ch-21_1.txt","w");

    if(fp!=NULL)
    {
        printf("your file created successfuliy !!!\n\n");

        printf("Enter your Email:");
        scanf("%s",&email);
        printf("Enter your Password:");
        scanf("%s",&psw);

        fprintf(fp,"Email\t: %s\n",email);
        fprintf(fp,"Password\t: %s\n",psw);

        fclose(fp);
    }
    else{
        printf("your file not created...");
    }
    return 0;
}
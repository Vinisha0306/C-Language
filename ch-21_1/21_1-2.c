#include<stdio.h>

int main()
{
    FILE *fp;

    fp= fopen("ch-21_2.txt","w");

    if(fp!=NULL)
    {
        printf("Your file created successfuliy !!!\n\n");

        fprintf(fp,"Numbers that are divisible by both 3 & 5 : ");

        for(int i=1;i<=50;i++)
        {
            if(i%3==0 && i%5==0)
            {
                fprintf(fp,"%d ",i);
            }
        }

        fclose(fp);
    }
    else{
        printf("Your file not created....");
    }
    return 0;
}



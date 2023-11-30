#include<stdio.h>

int main()
{
    FILE *fp;

    fp= fopen("pr-9_even.txt","w");

    if(fp!=NULL)
    {
        printf("Your file created successfuliy !!!\n\n");

        fprintf(fp,"Even numbers from even_file.txt:");

        for(int i=50;i<=70;i++)
        {
            if(i%2==0)
            {
                fprintf(fp,"%d ",i);
            }
        }

        fclose(fp);
    }
    else{
        printf("Your file not created....");
    }

    fp= fopen("pr-9_odd.txt","w");

    if(fp!=NULL)
    {
        printf("Your file created successfuliy !!!\n\n");

        fprintf(fp,"odd numbers from odd_file.txt:");

        for(int i=50;i<=70;i++)
        {
            if(i%2==1)
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

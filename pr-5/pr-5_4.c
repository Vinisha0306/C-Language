#include<stdio.h>

main()
{
	int r,c;
	printf("Enter the array row size:");
	scanf("%d",&r);
	printf("Enter the array column size:");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum1=0,sum2=0,row,column;

	printf("Enter array elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Row number:");
	scanf("%d",&row);
	printf("Elements of row:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==row)
			{
				printf("%d ",a[i][j]);
				sum1+=a[i][j];
			}
		}
	}
	printf("\nThe sum of a row:%d\n\n",sum1);
	printf("Enter cloumn number:");
	scanf("%d",&column);
	printf("Elements of cloumn:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==column)
			{
				printf("%d ",a[i][j]);
				sum2+=a[i][j];
			}
		}
	}
	printf("\nThe sum of a cloumn:%d\n\n",sum2);
}

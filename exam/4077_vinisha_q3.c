#include<stdio.h>

struct bill{
	char name[20];
}

main()
{
	int n,i,bill,a=0,sum;
	char mname[20];
	
	printf("Enter number of product:");
	scanf("%d",&n);
	
	struct bill b[n];
	int qty[n],price[n];
	long int con_n;
	
	printf("Enter name:");
	scanf(" %s",&mname);
	printf("Enter contact no:");
	scanf(" %ld",&con_n);
	printf("\n\n");
		
	for(i=0;i<n;i++)
	{
		printf("Enter product name:");
		scanf(" %s",&b[i].name);
		printf("Enter product price:");
		scanf("%d",&price[i]);
		printf("Enter product qty:");
		scanf("%d",&qty[i]);
		printf("\n");	
	}
	
	
	printf("\t\t%s\n",mname);
	printf("contact no.%ld\n",con_n);
	printf("product no.\tproduct name\tproduct price\tproduct qty\ttotal\n");
	
	for(i=0;i<n;i++)
	{
		
		printf("%d\t\t%s\t\t%d\t\t%d\t\t%d\n",i+1,b[i].name,price[i],qty[i],price[i]*qty[i]);
		a=(price[i]*qty[i]);
		bill=sum;
	}
	printf("bill=%d",bill);
}
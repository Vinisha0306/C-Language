#include<stdio.h>

int main()
{
	int i,last,first,sum=0;

	printf("Enter any number:");
	scanf("%d",&i);

	last=i%10;

	while(i>=10)
	{
	
		i=i/10;
	
	}
	
	first=i;
	sum=first+last;
	
	printf("first and last number sum:%d",sum);

	return 0;
}

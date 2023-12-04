#include<stdio.h>

int sum(int i,int n,int s)
{
    if(i<=n)
    {
		s+=i;
		i++;
		sum(i,n,s);
	}
	else
	{
	  printf("%d",s);
	}
}

int main()
{
	int i,n;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	sum(1,n,0);
	
	return 0;
}
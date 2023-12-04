#include<stdio.h>

main()
{
	int a=0,j,k,l,m,count=0,v,w;
	char email[20],psw[20];
	int i;
	
	printf("create email:");
	scanf("%s",&email);
	printf("create password:");
	scanf("%s",&psw);
	
	for(i=0;email[i]!=NULL;i++)
	{
		if(email[i]=='@' && email[i]=='.')
		{
			a++;
		}
	}
	
	for(i=0;email[i]!=NULL;i++)
	{
		count++;
	}
	
	for(i=0;psw[i]!=NULL;i++)
	{
		if(count>=8)
		{
			if(psw[i]>='a' && psw[i]<='z')
			{
				j=1;
			}
			
			else if(psw[i]>='A' && psw[i]<='Z')
			{
				k=1;
			}
			
			else if(psw[i]>='0' && psw[i]<='9')
			{
				l=1;
			}
			
			else
			{
				m=1;
			}
			
		}
	}
	
	if(a==2)
	{
		v=1;
	}
	
	if(j==1 && k==1 && l==1 && m==1)
		w=1;
		
	if(w==1 || v==1)
	{
		printf("strong");
	}
	else{
		printf("not strong");
	}
}
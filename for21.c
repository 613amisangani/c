#include<stdio.h>
int main()
{
	int i,n;
	char letter = 65;
	
	
	printf("enter value :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			printf("%c \n",letter);
		}
		else
		{
			printf("%c \n",letter+32);
		}
		letter+=2;
	}
	
	return 0;
	
}
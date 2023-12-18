#include<stdio.h>
int main()
{
	
	int i,n;
	char c;
	
	printf("enter value for :");
	scanf("%d",&n);
	
	i=0;
	
	while(i<=n)
	{
		printf("%c \n",c);
		c ='A'+2*i;
		
		i++;
		
	}
	
 return 0;
}


D:\c>while8
enter value for :5

A
C
E
G
I
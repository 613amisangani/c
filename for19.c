#include<stdio.h>
int main()
{
	int i,n;
	
	
	printf("enter value :");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		char letter='A'+2*i;
	 printf("%c \n", letter);
	}
	
	return 0;
	
}


D:\c>for19
enter value :5
A
C
E
G
I
K
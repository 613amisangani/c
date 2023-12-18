#include<stdio.h>
int main()
{
	
	int i,n;
	
	printf("enter value for :");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		printf("%d \n",i);
		
		i*=2;
		
	}
	
 return 0;
}

D:\c>while3
enter value for :20
1
2
4
8
16
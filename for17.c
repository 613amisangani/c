#include<stdio.h>
int main()
{
	int i,n;
	
	printf("enter value :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i*=2)
	{
	 printf("%d \n",i);
	}
	
	return 0;
	
}


D:\c>for17
enter value :20
1
2
4
8
16
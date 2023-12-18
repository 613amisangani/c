#include<stdio.h>
int main()
{
	int i,n;
	
	printf("enter value :");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
	 printf("%d \n",(1<<i)*(i+1));
	}
	
	return 0;
	
}

D:\c>for18
enter value :5
1
4
12
32
80
192
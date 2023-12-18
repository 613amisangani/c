#include<stdio.h>
int main()
{
	
	int i,n;
	
	printf("enter value for :");
	scanf("%d",&n);
	
	i=0;
	
	while(i<=n)
	{
		printf("%d \n",(1<<i)*(i+1));
		
		i++;
		
	}
	
 return 0;
}


D:\c>while5
enter value for :5
1
4
12
32
80
192
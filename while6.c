#include<stdio.h>
int main()
{
	
	int i,n,a=1,b=1;
	
	printf("enter value for :");
	scanf("%d",&n);
	
	i=1;
	
	while(i<=n)
	{
		printf("%d \n",a);
		int n = a+b;
		a=b;
		b=n;
		
		i++;
		
	}
	
 return 0;
}


D:\c>while6
enter value for :5
1
1
2
3
5
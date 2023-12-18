#include<stdio.h>
int main()
{
	int i,n,a=1,b=1;
	
	
	printf("enter value :");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		printf("%d \n",a);
		int n = a+b;
		a=b;
		b=n;
		
	}
	
	return 0;
	
}

D:\c>for20
enter value :5
1
1
2
3
5
8
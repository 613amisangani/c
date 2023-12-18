#include<stdio.h>
int main()
{
	
	int i=1,k;
	i=1;
	while(i<=5)
	{
		k=1;
		
		while(k<=i)
		{
			printf("%d",i);
			k++;
		}
		
		printf("\n",i);
		i++;
	}
	
	
 return 0;
}

D:\c>while18
1
22
333
4444
55555
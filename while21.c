#include<stdio.h>
int main()
{
	
	int i=1,k;
	
	while(i<=5)
	{
		k=1;
		
		while(k<=i)
		{
			printf("%d \t",k);
			k++;
		}
		
		printf("\n");
		i++;
	}
	
	
 return 0;
}


D:\c>while21
1
1       2
1       2       3
1       2       3       4
1       2       3       4       5
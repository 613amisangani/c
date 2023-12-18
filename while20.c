#include<stdio.h>
int main()
{
	
	int i=5,k;
	
	while(i>=1)
	{
		k=1;
		
		while(k<=i)
		{
			printf("%d \t",k);
			k++;
		}
		
		printf("\n");
		i--;
	}
	
	
 return 0;
}


D:\c>while20
1       2       3       4       5
1       2       3       4
1       2       3
1       2
1
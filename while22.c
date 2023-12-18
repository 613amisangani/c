#include<stdio.h>
int main()
{
	
	int i=5,k;
	
	while(i>=1)
	{
		k=5;
		
		while(k>=i)
		{
			printf("%d \t",k);
			--k;
		}
		
		printf("\n");
		--i;
	}
	
	
 return 0;
}


D:\c>while22
5
5       4
5       4       3
5       4       3       2
5       4       3       2       1

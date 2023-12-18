#include<stdio.h>
int main()
{
	
	int i=1,k,j=1;
	
	while(i<=5)
	{
		k=1;
		
		while(k<=i)
		{
			printf("%d \t",j++);
			k++;
		}
		
		printf("\n");
		i++;
	}
	
	
 return 0;
}

1
2       3
4       5       6
7       8       9       10
11      12      13      14      15
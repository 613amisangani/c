#include<stdio.h>
int main()
{
	
	int i,k;
	i=1;
	while(i<=5)
	{
		k=1;
		
		while(k<=5-i)
		{
			printf(" ");
			k++;
		}
		
		
		k=1;
		while(k<=i)
		{
		
		
		printf("*");
			k++;
		}
		
		printf("\n");
		i++;
	}
	
	
 return 0;
}

D:\c>while27
    *
   **
  ***
 ****
*****
#include<stdio.h>
int main()
{
	
	int i=1,k;
	char j='A';
	
	while(i<=5)
	{
		k=1;
		
		while(k<=5)
		{
			printf("%c",j++);
			k++;
		}
		
		printf("\n");
		i++;
	}
	
	
 return 0;
}



D:\c>while16
ABCDE
FGHIJ
KLMNO
PQRST
UVWXY
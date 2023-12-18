#include<stdio.h>
int main()
{
	
	char i,k,j='A';
	i=1;
	while(i<=5)
	{
		k=1;
		
		while(k<=i)
		{
			printf("%c \t",j++);
			k++;
		}
		
		printf("\n");
		i++;
	}
	
	
 return 0;
}


D:\c>while23
A
B       C
D       E       F
G       H       I       J
K       L       M       N       O

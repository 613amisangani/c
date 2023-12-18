#include<stdio.h>
int main()
{
	
	char i,k,j='a';
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


D:\c>while24
a
b       c
d       e       f
g       h       i       j
k       l       m       n       o
#include<stdio.h>
int main()
{

  char i,j,c='A';
  
  i=1;
  do
  {
  
    j=1;
	
	while(j<=i)
	{
	printf("%c",c++);
	j++;
	}
	 printf("\n");
	 i++;
  
  }
  while(i<=5);

  return 0;
}


D:\c>do21
A
BC
DEF
GHIJ
KLMNO
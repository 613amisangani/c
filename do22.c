#include<stdio.h>
int main()
{

  int i,j;
  
  i=5;
  do
  {
  
    j=1;
	
	while(j<=i)
	{
	printf("*");
	j++;
	}
	 printf("\n");
	 i--;
  
  }
  while(i>=1);

  return 0;
}

D:\c>do22
*****
****
***
**
*
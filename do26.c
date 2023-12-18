#include<stdio.h>
int main()
{

  int i,j;
  
  i=1;
  do
  {
  
    j=1;
	
	while(j<=5-i)
	{
	printf(" ");
	j++;
	}
	
	j=1;
	
	while(j<=i)
	{
	printf("* ");
	j++;
	}
	
	
	 printf("\n");
	 i++;
  
  }
  while(i<=5);
  
  i=4;
  do
  {
  
    j=1;
	
	while(j<=5-i)
	{
	printf(" ");
	j++;
	}
	
	j=1;
	
	while(j<=i)
	{
	printf("* ");
	j++;
	}
	
	
	 printf("\n");
	 i--;
  
  }
  while(i>=1);
  

  return 0;
}



D:\c>do26
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

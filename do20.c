#include<stdio.h>
int main()
{

  int i,j;
  
  i=5;
  do
  {
  
    j=5;
	
	while(j>=i)
	{
	printf("%d",j);
	--j;
	}
	 printf("\n");
	 --i;
  
  }
  while(i>=1);

  return 0;
}


D:\c>do20
5
54
543
5432
54321
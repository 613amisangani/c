#include<stdio.h>
int main()
{

  int i,j;
  
  i=1;
  do
  {
  
    j=1;
	
	while(j<=i)
	{
	printf("%d",j);
	j++;
	}
	 printf("\n");
	 i++;
  
  }
  while(i<=5);

  return 0;
}


D:\c>do19
1
12
123
1234
12345
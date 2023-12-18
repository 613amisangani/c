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
	printf("%d",j);
	j++;
	}
	 printf("\n");
	 i--;
  
  }
  while(i>=1);

  return 0;
}



D:\c>do18
12345
1234
123
12
1
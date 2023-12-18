#include<stdio.h>
int main()
{
  int i,j;
  
  i=1;
  do
  {
  
    j=1;
	
	while(j<=5)
	{
	if(i%2!=0)
	
	{
	printf("%d",i);
	}
	++j;
	}
	 printf("\n");
	 ++i;
  
  }
  while(i<=10);

  return 0;
}




D:\c>do12
11111

33333

55555

77777

99999

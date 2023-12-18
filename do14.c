#include<stdio.h>
int main()
{

  int i,k;
  char j='A';
  
  i=1;
  do
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
  while(i<=5);

  return 0;
}
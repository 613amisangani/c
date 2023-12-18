#include<stdio.h>
int main()
{

  int i,j,k=1;
  
  i=1;
  do
  {
  
    j=1;
	
	while(j<=i)
	{
	printf("%d",k++);
	j++;
	}
	 printf("\n");
	 i++;
  
  }
  while(i<=5);

  return 0;
}


D:\c>do17
1
23
456
78910
1112131415
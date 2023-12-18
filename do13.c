#include<stdio.h>
int main()
{

  int i,j,k=1;
  
  i=1;
  do
  {
  
    j=1;
	
	while(j<=5)
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



D:\c>do13
12345
678910
1112131415
1617181920
2122232425

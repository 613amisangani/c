#include<stdio.h>
int main()
{

  int i,j,k=11;
  
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



D:\c>do15
1112131415
1617181920
2122232425
2627282930
3132333435

#include<stdio.h>
int main()
{
  int i,n,j=1,r=0;
  float term = 0.5;
  
  printf("enter value:");
  scanf("%d",&n);
  
  i=1;
  
  do
  {
    printf("%2f \n",term);
	term += 0.5*(1+r);
	r += 2;
	
	i++;
  }
  
  while(i<=n);
 
  return 0;
}

D:\c>do8
enter value:5
0.500000
1.000000
2.500000
5.000000
8.500000

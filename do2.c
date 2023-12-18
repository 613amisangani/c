#include<stdio.h>
int main()
{
  int i,n;
  
  printf("enter value:");
  scanf("%d",&n);
  i=1;
  
  do
  {
    printf("%d \n",i*i);
	i++;
  }
  
  while(i<=n);
 
  return 0;
}

D:\c>do2
enter value:5
1
4
9
16
25
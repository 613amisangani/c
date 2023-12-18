#include<stdio.h>
int main()
{
  int i,n;
  
  printf("enter value:");
  scanf("%d",&n);
  i=1;
  
  do
  {
    printf("%d \n",i);
	i*=2;
  }
  
  while(i<=n);
 
  return 0;
}



D:\c>do3
enter value:29
1
2
4
8
16
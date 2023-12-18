#include<stdio.h>
int main()
{
  int i,n;
  char c;
  
  printf("enter value:");
  scanf("%d",&n);
  
  i=0;
  
  do
  {
    printf("%c\n",c);
	c='A'+2*i;
	
	i++;
  }
  
  while(i<=n);
 
  return 0;
}


D:\c>do7
enter value:5

A
C
E
G
I
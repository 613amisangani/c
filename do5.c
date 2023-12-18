#include<stdio.h>
int main()
{
  int i,n,a=1,b=1;
  
  printf("enter value:");
  scanf("%d",&n);
  i=1;
  
  do
  {
    printf("%d \n",a);
	int n=a+b;
	a=b;
	b=n;
	i++;
  }
  
  while(i<=n);
 
  return 0;
}

D:\c>do5
enter value:5
1
1
2
3
5
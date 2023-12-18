#include<stdio.h>
int main()
{
  int i,n;
  
  printf("enter value:");
  scanf("%d",&n);
  i=0;
  
  do
  {
    printf("%d \n",(1<<i)*(i+1));
	i++;
  }
  
  while(i<=n);
 
  return 0;
}

enter value:5
1
4
12
32
80
192

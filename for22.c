#include<stdio.h>
int main()
{
  float term = 0.5;
  int n,i,j=1,r=0;
  
  printf("enter value");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
  {
  
  printf("%2f \t",term);
  term = 0.5 * (1+r);
  r += 2;
  }
  
  return 0;
} 

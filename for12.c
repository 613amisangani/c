#include<stdio.h>
int main()
{
  
  int j,sum=0;
  
 // printf("enter value for sum:");
  
  for(j=1;j<=10;j++)
  {
	  sum=sum+j;
	  printf("%d",j);
	  
  }
  printf("\n sum is : %d\n",sum);
  
 return 0;
}
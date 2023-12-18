#include<stdio.h>
void add()
{
  int j,sum=0;
  
  for(j=1;j<=10;j++)
  {
	  sum=sum+j;
	  printf("%d",j);
	  
  }
  printf(" value is:%d\n",sum);
}
int main()
{

   int j,sum=0;
   printf("sum is :\n");
   add();
}








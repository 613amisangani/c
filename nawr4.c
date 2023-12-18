#include<stdio.h>
int sum()
{
  int a,b;
  printf("enter the value:");
  scanf("%d %d",&a,&b);
  if(a<b)
   {
        printf("a is small");
   }		
    else
	{	
        printf("b is small");
	}
  return 0;
}
int main()
{
 int a,b;
 sum();

 return 0;
}
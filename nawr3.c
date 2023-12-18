#include<stdio.h>
int sum()
{
  int a,b,c=0;
  printf("enter the value:");
  scanf("%d %d",&a,&b);
  c=a+b;
  return c;
}
int main()
{
 int c=0;
 c=sum();
 printf("with return : %d \n",c);
 return 0;
}



/*
D:\c>nawr3
enter the value:2
3
with return : 5
*/
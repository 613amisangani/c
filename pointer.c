
#include<stdio.h>
int main()
{
  int a =30,*p;
  p = &a;
  
  printf("value of a is :%d\n",a);
  printf("address of a is :%u\n",&a);
  printf("address of a using p is :%d\n",p);
  printf("address of p is :%u\n",&p);
  printf("value of using p is :%d\n",*p);
  
    
}
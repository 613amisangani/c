#include<stdio.h>
int fibo(int num)
{

  if(num ==1 || num == 0)
  {
    return num;
  }
  else
  {
   return(fibo(num-1) + fibo(num-2));
  }

}
int main()
{
  int i,n;

 printf("emter value");
 scanf("%d",&n);

 for(i=0;i<=n;i++)
{
 printf("%d \t",fibo(i));
} 

 return 0;
 
}
#include<stdio.h>
void sum()
{
   int a,b,c;
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

}
int main()
{
  int a,b;	
  sum();

}


/*
D:\c>nanr14
the value is:enter the value:2
3
a is small
*/
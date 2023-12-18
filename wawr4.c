#include<stdio.h>
void sum(int a)
{
  
   if(a%5==0)
   {
        printf("is divide by 5");
   }		
    else
	{	
        printf("is not divide by 5");
	}

}
int main()
{
	int a;
	printf("enter the value:");
   scanf("%d",&a);
	sum(a);
	
}

/*
D:\c>wawr4
enter the value:24
is not divide by 5
D:\c>gcc wawr4.c -o wawr4

D:\c>wawr4
enter the value:25
is divide by 5
*/
#include<stdio.h>
void sum()
{
   int a;
   printf("enter the value:");
   scanf("%d",&a);
   if(a>0)
   {
        printf("value is positive");
   }		
    else
	{	
        printf("value is negitive");
	}

}
int main()
{
	int a;
	sum();
	
}


/*
D:\c>nanr16
enter the value:2
value is positive
D:\c>gcc nanr16.c -o nanr16

D:\c>nanr16
enter the value:-7
value is negitive
*/
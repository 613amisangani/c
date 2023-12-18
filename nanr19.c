#include<stdio.h>
void sum()
{

   int a;
   printf("enter the value:");
   scanf("%d",&a);
   if(a%4==0)
   {
        printf("is leap year");
   }		
    else
	{	
        printf("is not leap year");
	}
	

}
int main()
{
	int a;
    sum();
	
}

/*
D:\c>nanr19
enter the value:2024
is leap year
D:\c>gcc nanr19.c -o nanr19

D:\c>nanr19
enter the value:2023
is not leap year
*/
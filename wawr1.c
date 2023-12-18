#include<stdio.h>
void sum(int a)
{

   
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
	printf("enter the value:");
   scanf("%d",&a);
	sum(a);
	
}

/*
D:\c>wawr1
enter the value:2022
is not leap year
D:\c>wawr1
enter the value:2024
is leap year
*/
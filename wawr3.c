#include<stdio.h>
void sum(int a)
{
   
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
	printf("enter the value:");
    scanf("%d",&a);
	sum(a);
	
}


/*
D:\c>wawr3
enter the value:2
value is positive
D:\c>gcc wawr3.c -o wawr3

D:\c>wawr3
enter the value:-2
value is negitive
*/
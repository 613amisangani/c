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
	if(a%3==0)
   {
        printf("is divide by 3");
   }		
    else
	{	
        printf("is not divide by 3");
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
D:\c>wawr5
enter the value:23
is not divide by 5is not divide by 3
D:\c>wawr5
enter the value:25
is divide by 5is not divide by 3	
*/	
#include<stdio.h>
void sum()
{
   int a;
   printf("enter the value:");
   scanf("%d",&a);
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
	sum();
	
}

/*
D:\c>nanr17
enter the value:35
is divide by 5
D:\c>nanr17
enter the value:34
is not divide by 5
*/
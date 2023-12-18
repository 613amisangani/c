#include<stdio.h>
void sum(int a,int b)
{
    if(a<b)
   {
        printf("a is smallest");
   }		
    else
	{	
        printf("b is smallest");
	}

}
int main()
{
	int a,b;
	printf("enter the value:");
    scanf("%d",&a);
	printf("enter the value:");
    scanf("%d",&b);
	sum(a,b);
	
}


/*
D:\c>wawr2
enter the value:2
enter the value:3
a is smallest
*/
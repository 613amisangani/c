#include<stdio.h>
void sum(int a,int b,int c)
{
   
   
   if((a>b)&&(a>c))
   {
        printf("a is largest");
   }
   if((b>a)&&(b>c))
   {
        printf("b is largest");
   }		   
    else
	{	
        printf("c is largest");
	}

}
int main()
{
	int a,b,c;
	printf("enter the value:");
   scanf("%d",&a);
   printf("enter the value:");
   scanf("%d",&b);
   printf("enter the value:");
   scanf("%d",&c);
	sum(a,b,c);
}

/*
D:\c>wawr6
enter the value:4
enter the value:5
enter the value:6
c is largest
*/
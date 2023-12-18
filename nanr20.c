#include<stdio.h>
void sum()
{
   int a,b,c;
   printf("enter the value:");
   scanf("%d",&a);
   printf("enter the value:");
   scanf("%d",&b);
   printf("enter the value:");
   scanf("%d",&c);
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
	int a;
	sum();
	
}


/*
D:\c>nanr20
enter the value:12
enter the value:23
enter the value:21
b is largest
D:\c>nanr20
enter the value:21
enter the value:34
enter the value:43
c is largest
*/
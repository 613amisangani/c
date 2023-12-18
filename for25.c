#include<stdio.h>
int main()
{
 
 int i,j;
 
 printf("enter value for :");
 scanf("%d",&i);
 
 for(i=1;i<=10;++i)
 {
	 for (j=1;j<=5;++j)
	 {
	 if(i%2!=1)
	 {
     printf("%d\t",i);
	 }
 }
	 
	 printf("\n");
 }
 
 return 0;
 
}


D:\c>for25
enter value for :5

2 2 2 2 2

4 4 4 4 4

6 6 6 6 6

8 8 8 8 8

10 10 10 10 10

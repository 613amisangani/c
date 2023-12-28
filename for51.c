#include<stdio.h>
int main()
{

 int i,k,p=1;
 
 for(i=1;i<=5;i++)
 {
	 for(k=1;k<=i;k++)
	 {
		 printf("%d\t",p);
		 p = p%2==1;
	 }
	 printf("\n");
 }
 
 
 return 0;
 
 }
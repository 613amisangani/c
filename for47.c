#include<stdio.h>
int main()
{

 int i=1,j=0;
 

 for(i=1;i<=5;--i)
 {
	 for(j=1;j<=i;j--)
 {
	 if(i=1)
	 {
		 printf("%d",j);
	 }
	 else
	 {
		 printf("%d",i);
	 }
 }
 printf("\n");
 }
 
 return 0;
}
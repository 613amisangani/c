#include<stdio.h>
int main()
{

 int i,j;
 

 for(i=5;i>=1;i--)
 {
 for(j=1;j<=i;j++)
 {
 printf("%d \t",j);
 }
 printf("\n");
 } 

 return 0;
 
}


D:\c>for35
1       2       3       4       5
1       2       3       4
1       2       3
1       2
1


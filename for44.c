#include<stdio.h>
int main()
{

 int i,j,s,n;
 printf("enter value for:");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
 for(s=1;s<=n-i;s++)
 {
 printf("  ");
 }
 for(j=1;j<=((2*i)-1);j++)
 {
 printf("* ");
 }
 printf("\n");
 }

 return 0;
}

D:\c>for44
enter value for:5
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

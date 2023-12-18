#include<stdio.h>
int main()
{
 
 int i,j;
 
 printf("enter value for :");
 scanf("%d",&i);
 
 for(i=1;i<=5;++i)
 {
	 for (j=1;j<=5;++j)
	 {
     printf("%d ",j);
 }
	 
	 printf("\n");
 }
 
 return 0;
 
}


D:\c>for24
enter value for :5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

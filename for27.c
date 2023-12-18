#include<stdio.h>
int main()
{
 
 int i,j,k=1;
 
 printf("enter value for :");
 scanf("%d",&i);
 
 for(i=1;i<=5;i++)
 {
	 for (j=1;j<=5;j++)
	 
	 {
     printf("%d",k++);
	 }
 
	 
	 printf("\n");
 }
 
 return 0;
 
}

D:\c>for27
enter value for :5
12345
678910
1112131415
1617181920
2122232425
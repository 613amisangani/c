#include<stdio.h>
int main()
{
 
 int i,j,k=11;
 
 printf("enter value for :");
 scanf("%d",&i);
 
 for(i=1;i<=5;i++)
 {
	 for (j=1;j<=5;j++)
	 
	 {
     printf("%d",k++);
	 }
 
	 k+=5;
	 printf("\n");
 }
 
 return 0;
 
}

D:\c>for26
enter value for :5
1112131415
2122232425
3132333435
4142434445
5152535455




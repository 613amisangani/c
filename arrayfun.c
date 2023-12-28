#include<stdio.h>
#define n 7
void display(int arr[])
{
  for(int i=0;i<n;i++)
   {
   printf("%d \t",arr[i]);
   }  
}
int main()
{
	int a[n];
  for(int i=0;i<n;i++)
   {
   printf("enter val:");
   scanf("%d",&a[i]);
   }  
   display(a);
}
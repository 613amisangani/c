#include<stdio.h>
#define n 8
void min(int arr[])
{
	
	int max,min,i;
	max = arr[0];
    min = arr[0];
	
	for(int i=0;i<n;i++)
	{
	 
	if(arr[i]<=max)
	{
		max=arr[i];
	}
	if(arr[i]>=min)
	{
		min=arr[i];
	}
	printf("%d",arr[i]);	
	}
	
	
}

int main()
{
	int a[n],max,i;
    
	
	for(int i=1;i<n;i++)
	{
		printf("enter the value:");
		scanf("%d",&a[i]);
	}
	
	printf("Maximum element = %d\n",a[n]);
    printf("Minimum element = %d",a[n]);
	min(a);
}
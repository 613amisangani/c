#include<stdio.h>
int fibonachi(int num)
{
	if(num == 1 || num == 0)
	{
		return num;
	}
	else
	{
		return (num + fibonachi(num-1));
	}
}
int main()
{
	int n,i;
	printf("enter a number");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		printf("%d \t",fibonachi(i));
	}
		
	return 0;
}

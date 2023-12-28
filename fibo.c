#include<stdio.h>
int fibonachi(int num)
{
	
	
	if(num == 1 || num == 0)
	{
		return num;
	}
	else
	{
		return (fibonachi(num-1) + fibonachi(num-2));
	
	
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
/*
D:\c>fibo
enter a number10
0       1       1       2       3       5       8       13      21      34      55
*/
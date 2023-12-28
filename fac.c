#include<stdio.h>
int factorial(int number)
{
	if(number == 1 || number == 0)
	{
		return 1;
	}
	else
	{
		return (number * factorial(number-1));
	}
}
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	printf("the factorial of %d is %d",a,factorial(a));
	
	return 0;
}



/*

D:\c>fac
enter a number5
the factorial of 5 is 120
D:\c>fac
enter a number7
the factorial of 7 is 5040
D:\c>fac
enter a number3
the factorial of 3 is 6
*/
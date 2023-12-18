#include<stdio.h>
int main()
{
	
	int i,n;
	
	printf("enter value for :");
	scanf("%d",&n);
	
	i=1;
	
	while(i<=n)
	{
		{
	       if(i%2!=1)
	        {
		       printf("%d",i);
	        }
	       else
	        {
		       printf("%d \n",(i*i));
	        }
		}
	
		
		
	++i;
		
	}
	
 return 0;
}
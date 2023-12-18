#include<stdio.h>
int main()
{
	int i,n;
	
	printf("enter value :");
	scanf("%d",&n);
	
	for(i=1;i<=n;++i)
	{
	 if(i%2!=0)
	 {
		 printf("%d \n",i);
	 }
	 
	 else
	 {
		 printf("%d \n",(i*i));
	 }
	 
	}
	
	return 0;
	
}


D:\c>for15
enter value :5
1
4
3
16
5

D:\c>

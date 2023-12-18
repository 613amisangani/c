#include<stdio.h>
void per()
{

	int i,n;
	
	
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
	
}

int main()
{
  int i,n;
  printf("the value is: \n");
  per();
}



/*
D:\c>nanr12
the value is:
5
1
4
3
16
5
*/
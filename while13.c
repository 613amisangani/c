#include<stdio.h>
int main()
{
	
	int i=1,j=11,k;
	
	while(i<=5)
	{
		k=1;
		
		while(k<=5)
		{
			printf("%d",j++);
			k++;
		}
		k+=5;
		printf("\n \t");
		i++;
	}
	
	
 return 0;
}


D:\c>while13
1112131415
1617181920
2122232425
2627282930
3132333435
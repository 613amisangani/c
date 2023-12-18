#include<stdio.h>
int main()
{
	
	int r,c;
	int i,j;
	
	printf("enter the number of row:");
	scanf("%d",&r);
	
	printf("enter the number of column:");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("enter the element :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
				printf("%d \t",a[i][j]);
			}
			else
			{
			  printf("\t");	
			}
		}
		printf("\n");
	}
	

  return 0;
}


D:\c>4
enter tht number of row:4
enter tht number of column:3
enter the element :
0
8
7
6
8
0
7
6
8
7
0
8
        8       7
6       8
7       6       8
7               8
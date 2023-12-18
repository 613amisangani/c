#include<stdio.h>
int main()
{
 
  int r,c;
  int i,j;
  int sum[3][3];
  int a[3][3];
  int b[3][3];
  
  printf("enter the element :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	 printf("Enter elements of 2nd :\n");
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 3; ++j) {
      printf("Enter element b%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]!=1)
			{
				printf("%d \t",a[i][j]);
			}
			else
			{
			  printf(" \t");	
			}
		}
		printf("\n");
	}
	 
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 3; ++j)
		{
      sum[i][j] = a[i][j] + b[i][j];
	  //printf("\nSum of two element: \n");
      printf("%d ", sum[i][j]);
    }
	
	
  
  return 0;
  
}
#include<stdio.h>
int main()
{
	
	
	int n,v,i,j,r,c,sum = 0;
	
	printf("Enter size of the array: ");
    scanf("%d", &i);
	printf("Enter size of the array: ");
    scanf("%d", &j);
	int a[i][j];
	
	
	//printf("Enter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
		printf("Enter elements of 1st matrix: %d\n");
      printf("Enter element %d: ",a[i][j] );
      scanf("%d", &a[i][j]);
    }

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      
    }
	int b[i][j];
	
	printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
		{
      sum = a[i][j] + b[i][j];
    }
	// printing the result
 // printf("\nSum of two matrices: \n",sum);
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
		{
			printf("\nSum of two matrices: \n",sum);
      printf("%d",sum);
      //if (j == c - 1) {
        //printf("\n\n");
      //}
    }
	

 return 0;
}
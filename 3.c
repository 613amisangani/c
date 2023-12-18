#include <stdio.h>
int main()
 {
  int r, c,i,j,sum[100][100];
  int a[i][j];
  int b[i][j];
  printf("Enter the number of rows : ");
  scanf("%d", &r);
  printf("Enter the number of columns : ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st :\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element %d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element %d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
		{
      printf("%d   ", sum[i][j]);
      if (j == c - 1) 
	  {
        printf("\n\n");
      }
   }

  return 0;
}
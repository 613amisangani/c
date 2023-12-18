#include<stdio.h>
int main()
 {
  int r, c, a[10][10], b[10][10], sum[10][10], i, j;
  printf("Enter the number of rows : ");
  scanf("%d", &r);
  printf("Enter the number of columns : ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
	{
      printf("Enter element a%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd :\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
		{
      sum[i][j] = a[i][j] + b[i][j];
	  printf("\nSum of two element: \n");
      printf("%d   ", sum[i][j]);
    }

  
 
    

  return 0;
 }



/*

D:\c>2
Enter the number of rows : 2
Enter the number of columns : 2

Enter elements of 1st:
Enter element a1: 1
Enter element a1: 2
Enter element a2: 1
Enter element a2: 2
Enter elements of 2nd :
Enter element b1: 1
Enter element b1: 2
Enter element b2: 1
Enter element b2: 2

Sum of two element:
2
Sum of two element:
4
Sum of two element:
2
Sum of two element:
4
*/

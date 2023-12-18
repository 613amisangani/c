#include<stdio.h>
#include<conio.h>
int main()
{
     int m,n,p,q,c,d,k;
     int first[10][10],second[10][10],sum[10][10];
     
     printf("\nEnter the number of rows and columns of the first matrix");
     scanf("%d %d",&m,&n);
     printf("\nEnter the elements of the first matrix");
     for (c = 0;c < m;c++)
         for (d = 0;d < n;d++)
             scanf("%d",&first[c][d]);
     printf("\nEnter the number of rows and columns of the second matrix");
     scanf("%d %d",&p,&q);
     printf("\nEnter the elements of the second matrix");
     for (c = 0;c < p;c++)
         for (d = 0;d < p;d++)
             scanf("%d",&second[c][d]);
     for (c = 0;c < m;c++)
         for (d = 0;d < n;d++)
             for (k = 0;k < p;k++)
             {
                  
             }
     printf("\nThe sum of the two matrices is : \n\n");
     for (c = 0;c < m;c++)
         for (d = 0;d < n;d++)
         {
              printf("%d",&sum[c][d]);
              sum[c][d] = first[c][k] + second[k][d];
         }
     getch();
	 return 0;
}
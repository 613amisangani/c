#include<stdio.h>
int main()
{
   int i,j,m,sum = 0;
   int a[3][3];
   
   printf("enter the number of row:");
   scanf("%d",&m);
	
   
   
   for(i=0;i<m;i++)
   {
	  for(j=0;j<m;j++) 
	  {
		  scanf("%d",&a[i][j]);
	  }
   }
   
    printf("The matrix is \n"); 
        
        
         for (i = 0; i < m; i++) { 
            
             
            for (j = 0; j < m; j++)
				{ 
                printf(" %d", a[i][j]); 
            } 
            printf("\n"); 
        } 
  
    
    
    for(i=0;i<m;i++)
	{
		for (j = 0; j < m; j++)
	{
		if(i==j)
		{
		   sum = sum + a[i][j];
		   
		}		   
    }
	}
  printf("\n sum of diagonal array: %d",sum);

   return 0;
}


/*
D:\c>8
enter the number of row:3
enter the number of column:3
1
2
3
1
2
3
1
2
3
The matrix is
 1 2 3
 1 2 3
 1 2 3

 sum of diagonal array: 6
 */
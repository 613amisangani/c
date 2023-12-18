#include <stdio.h> 
int main() 
{ 
  
    int i, j, m , n , sum = 0; 
    int array[3][3]; 
    
	printf("enter the number of row:");
	scanf("%d",&m);
	
	printf("enter the number of column:");
	scanf("%d",&n);
    
	   
        
        
       for (i = 0; i < m; i++) { 
            
            for (j = 0; j < n; j++) { 
                
                scanf("%d", &array[i][j]); 
            } 
        } 
        
        printf("The matrix is \n"); 
        
        
       for (i = 0; i < m; i++)
		   { 
            
            
           for (j = 0; j < n; j++) 
		   { 
             printf(" %d", array[i][j]); 
            } 
           printf("\n"); 
        } 
        for (i = 0; i < m; i++)
			{ 
            
            
            sum = sum + array[i][i]; 
           
        } 
        
        printf("\n diagonal elements sum is = %d\n",sum); 
      
    
   
    return 0; 
}




/*
D:\c>7
enter the number of row:3
enter the number of column:3
4
3
2
1
2
3
4
3
2
The matrix is
 4 3 2
 1 2 3
 4 3 2

 diagonal elements sum is = 8
*/
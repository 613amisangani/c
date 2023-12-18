#include<stdio.h>
int main()
{
	int n,v,i,j,k,l,sum = 0;
	
	printf("Enter size of the array: ");
    scanf("%d", &n);
	printf("Enter size of the array: ");
    scanf("%d", &v);
	
	int array[n][v];
	
	
	
	
	
    for(i=0;i<n;i++)
	{
	
		for(j=0;j<v;j++)
		{
		printf("enter %d element of array :",n);	
        scanf("%d",&array[i][j]);
        /*sum += array[n][v];*/
        }
	

    //printf("Sum of all elements of array = %d",sum);

	}
	   
	
	int array1[k][l];
	
	
    for(i=0;i<k;i++)
	{
	
		for(j=0;j<l;j++)
		{
		printf("enter %d element of array :",n);	
        scanf("%d",&array1[k][l]);
        /*sum += array[n][v];*/
        }
	

    //printf("Sum of all elements of array = %d",sum);

	}
	    for(i=0;i<k;i++)
	{
	
		for(j=0;j<l;j++)
		{
		printf("enter  element of array : %d",array[i][j]+array1[k][l]);	
        
        
        }
	

    printf("Sum of all elements of array = %d",array[i][j]+array1[k][l]);

	}
	
	
	return 0;
}


/*
D:\c>2d-1
Enter size of the array: 4
enter 4 element of array :12
56
1
2
3
4
Sum of all elements of array = 78
*/
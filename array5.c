#include<stdio.h>
int main()
{
    int arr[10];
    int i, n, sum=0;

    
    printf("Enter size of the array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);

        
        sum += arr[i];
    }

    printf("Sum of all elements of array = %d", sum);

    return 0;
}



D:\c>array5
Enter size of the array: 8
Enter 8 elements in the array: 12
23
34
43
65
34
34
65
Sum of all elements of array = 310
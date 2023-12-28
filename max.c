 #include <stdio.h>
void MinMax(int arr[], int size, int *min, int *max)
 {
    *min = *max = arr[0]; 

    for (int i = 1; i < size; i++)
		{
        if (arr[i] < *min) 
		{
			
        } else if (arr[i] > *max) {
            *max = arr[i]; 
        }
    }
}

int main() {
    int size;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    
    int arr[size];

   
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int min, max;

   
    MinMax(arr, size, &min, &max);

    
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}

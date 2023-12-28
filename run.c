#include <stdio.h>
void RunningTotal(int arr[], int n)
 {
    int runningTotal = 0;
    
    for (int i = 0; i < n; i++) {
        runningTotal += arr[i];
        printf(" %d: %d\n", i + 1, runningTotal);
    }
}

int main() {
    
    int array[] = {1, 2, 3, 4, 5};
	
    int size = sizeof(array) / sizeof(array[0]);

    
    RunningTotal(array, size);

    return 0;
}
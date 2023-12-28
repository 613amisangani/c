#include <stdio.h>
#define n 8
void calculateRunningTotal(int arr[])
 {
    int runningTotal = 0;
    
    for (int i = 0; i < n; i++) {
        runningTotal += arr[i];
        printf("Running total after element %d: %d\n", i + 1, runningTotal);
    }
}

int main() {
    
    int a[n];
	for(int i=0;i<n;i++)
   {
    printf("enter value:");
	scanf("%d",&a[i]);
   }
	
    int size = sizeof(a) / sizeof(a[0]);

    
    calculateRunningTotal(a, size);

    return 0;
}
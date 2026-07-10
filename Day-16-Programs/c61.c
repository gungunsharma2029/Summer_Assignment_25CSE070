#include <stdio.h>

int findMissing(int arr[], int n) {
    // n is size of array, numbers should be 1 to n+1
    int total = (n + 1) * (n + 2) / 2; // Sum of 1 to n+1
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    return total - sum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6}; // 3 is missing
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Missing number = %d", findMissing(arr, n));
    return 0;
}
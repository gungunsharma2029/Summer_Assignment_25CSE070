#include <stdio.h>
#include <limits.h>

int secondLargest(int arr[], int n) {
    if(n < 2) return -1;
    
    int first = INT_MIN, second = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i]!= first) {
            second = arr[i];
        }
    }
    
    return (second == INT_MIN)? -1 : second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int result = secondLargest(arr, n);
    if(result!= -1)
        printf("Second largest = %d", result);
    else
        printf("No second largest found");
    return 0;
}
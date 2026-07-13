#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    if(n == 0) return -1;
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56}; // Array must be sorted
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 23;

    int result = binarySearch(arr, n, key);

    if(result!= -1)
        printf("Element found at index %d", result);
    else
        printf("Element not found");
    return 0;
}
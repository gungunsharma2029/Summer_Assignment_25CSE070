#include <stdio.h>

void rotateLeft(int arr[], int n) {
    int first = arr[0];
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
}

// For rotating by d positions: call this function d times or use reversal algorithm

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    rotateLeft(arr, n);
    
    printf("Array after left rotation: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
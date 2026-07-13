#include <stdio.h>

void sortDescending(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] < arr[j + 1]) { // Changed > to < for descending
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sortDescending(arr, n);
    
    printf("Descending order: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
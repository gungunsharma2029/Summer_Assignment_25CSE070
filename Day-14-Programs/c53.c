#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i; // return index if found
    }
    return -1; // not found
}

int main() {
    int arr[] = {10, 50, 30, 70, 80, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 30;
    
    int result = linearSearch(arr, n, key);
    if(result!= -1)
        printf("Element %d found at index %d", key, result);
    else
        printf("Element %d not found", key);
    return 0;
}
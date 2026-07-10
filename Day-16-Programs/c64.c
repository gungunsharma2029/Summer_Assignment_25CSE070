#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if(n == 0 || n == 1) return n;
    
    int newSize = 0;
    
    for(int i = 0; i < n; i++) {
        int isDuplicate = 0;
        
        // Check if arr[i] already exists in arr[0...newSize-1]
        for(int j = 0; j < newSize; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        
        if(!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    
    return newSize;
}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    n = removeDuplicates(arr, n);
    
    printf("Array after removing duplicates: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
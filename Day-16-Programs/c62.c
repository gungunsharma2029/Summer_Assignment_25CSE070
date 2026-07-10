#include <stdio.h>

int maxFrequency(int arr[], int n) {
    int maxCount = 0, maxElement = arr[0];
    
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        
        if(count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    
    printf("Element %d occurs %d times", maxElement, maxCount);
    return maxElement;
}

int main() {
    int arr[] = {1, 2, 3, 2, 2, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxFrequency(arr, n);
    return 0;
}
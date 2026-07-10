#include <stdio.h>

int countFrequency(int arr[], int n, int key) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            count++;
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 2, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 2;
    
    int freq = countFrequency(arr, n, key);
    printf("Frequency of %d = %d", key, freq);
    return 0;
}
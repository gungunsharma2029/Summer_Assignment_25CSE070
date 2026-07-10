#include <stdio.h>

void findPair(int arr[], int n, int target) {
    int found = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    
    if(!found)
        printf("No pair found with sum %d", target);
}

int main() {
    int arr[] = {8, 7, 2, 5, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 10;
    
    findPair(arr, n, target);
    return 0;
}
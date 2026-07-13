#include <stdio.h>

int main() {
    int n1 = 6, n2 = 5;
    int arr1[] = {1, 2, 2, 3, 4, 5};
    int arr2[] = {2, 2, 3, 5, 6};

    printf("Intersection: ");
    for(int i = 0; i < n1; i++) {
        int processed = 0;
        for(int k = 0; k < i; k++) {
            if(arr1[i] == arr1[k]) {
                processed = 1;
                break;
            }
        }
        if(processed) continue;

        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    return 0;
}
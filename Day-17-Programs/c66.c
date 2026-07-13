#include <stdio.h>

int main() {
    int n1 = 6, n2 = 5;
    int arr1[] = {1, 2, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 6};

    printf("Union: ");
    for(int i = 0; i < n1; i++) {
        int isDuplicate = 0;
        for(int k = 0; k < i; k++) {
            if(arr1[i] == arr1[k]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) printf("%d ", arr1[i]);
    }

    for(int i = 0; i < n2; i++) {
        int found = 0;
        for(int j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        int isDuplicate = 0;
        for(int k = 0; k < i; k++) {
            if(arr2[i] == arr2[k]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!found &&!isDuplicate) printf("%d ", arr2[i]);
    }
    return 0;
}
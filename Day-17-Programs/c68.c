#include <stdio.h>

void findCommon(int arr1[], int n1, int arr2[], int n2) {
    printf("Common elements: ");
    for(int i = 0; i < n1; i++) {
        int isDuplicate = 0;
        for(int k = 0; k < i; k++) {
            if(arr1[i] == arr1[k]) {
                isDuplicate = 1;
                break;
            }
        }
        if(isDuplicate) continue;

        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
}

int main() {
    int arr1[] = {1, 2, 2, 3, 4, 5};
    int arr2[] = {2, 3, 3, 5, 6};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    findCommon(arr1, n1, arr2, n2);
    return 0;
}
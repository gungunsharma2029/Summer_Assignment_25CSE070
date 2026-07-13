#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    int arr1;
    printf("Enter elements: ");
    for(int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    int arr2;
    printf("Enter elements: ");
    for(int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    int merged[n1 + n2];
    for(int i = 0; i < n1; i++) merged[i] = arr1[i];
    for(int i = 0; i < n2; i++) merged[n1 + i] = arr2[i];

    printf("Merged array: ");
    for(int i = 0; i < n1 + n2; i++) printf("%d ", merged[i]);
    return 0;
}
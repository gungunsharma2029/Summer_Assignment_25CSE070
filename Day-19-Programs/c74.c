#include <stdio.h>

int main() {
    int r = 2, c = 2;
    int a[2][2] = {{5, 6}, {7, 8}};
    int b[2][2] = {{1, 2}, {3, 4}};
    int diff[r][c];
    
    // Note: In real code add dimension check like Q73
    
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            diff[i][j] = a[i][j] - b[i][j];
    
    printf("Difference of matrices:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }
    return 0;
}
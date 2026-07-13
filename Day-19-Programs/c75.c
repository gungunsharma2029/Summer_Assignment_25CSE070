#include <stdio.h>

int main() {
    int r = 3, c = 2;
    int matrix[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int transpose[c][r];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            transpose[j][i] = matrix[i][j];

    printf("Original matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    printf("Transpose matrix:\n");
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
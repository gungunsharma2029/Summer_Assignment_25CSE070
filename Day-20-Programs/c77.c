#include <stdio.h>

int main() {
    int r1 = 2, c1 = 3, r2 = 3, c2 = 2;
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[2][2];

    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++)
            result[i][j] = 0;

    if(c1!= r2) {
        printf("Matrix multiplication not possible");
        return 0;
    }

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Result matrix:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}
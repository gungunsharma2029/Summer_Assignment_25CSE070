#include <stdio.h>

int main() {
    int n = 3;
    int matrix[3][3] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}};
    int isSymmetric = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j]!= matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric) break;
    }

    if(isSymmetric)
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");
    return 0;
}

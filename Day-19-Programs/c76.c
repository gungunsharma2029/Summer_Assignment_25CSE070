#include <stdio.h>

int main() {
    int n = 3;
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int primarySum = 0, secondarySum = 0;

    for(int i = 0; i < n; i++) {
        primarySum += matrix[i][i];
        secondarySum += matrix[i][n - 1 - i];
    }

    printf("Primary diagonal sum: %d\n", primarySum);
    printf("Secondary diagonal sum: %d\n", secondarySum);

    int totalDiagonalSum = primarySum + secondarySum;
    if(n % 2 == 1) totalDiagonalSum -= matrix[n/2][n/2];
    printf("Total diagonal sum without double count: %d\n", totalDiagonalSum);
    return 0;
}
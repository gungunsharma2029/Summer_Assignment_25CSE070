#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and cols for matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and cols for matrix 2: ");
    scanf("%d %d", &r2, &c2);

    if(r1!= r2 || c1!= c2) {
        printf("Addition not possible. Dimensions don't match.");
        return 0;
    }

    int a, b, sum;

    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            scanf("%d", &b[i][j]);

    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum of matrices:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    int low, high, i, temp1, temp2, remainder, n, result;
    printf("Enter range (low high): ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d are: ", low, high);
    for (i = low; i <= high; i++) {
        temp1 = i;
        n = 0;
        result = 0;
        
        // count digits
        temp2 = i;
        while (temp2 != 0) {
            temp2 /= 10;
            ++n;
        }
        
        temp2 = i;
        while (temp2 != 0) {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
        
        if (result == i)
            printf("%d ", i);
    }
    return 0;
}
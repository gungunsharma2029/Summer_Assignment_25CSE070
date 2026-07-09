#include <stdio.h>

int main() {
    int num, product = 1, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num == 0) {
        product = 0;
    } else {
        while (num != 0) {
            remainder = num % 10;
            product *= remainder;
            num /= 10;
        }
    }
    
    printf("Product of digits = %d", product);
    return 0;
}
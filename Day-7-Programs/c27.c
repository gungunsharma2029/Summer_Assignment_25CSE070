#include <stdio.h>

int sumOfDigits(int n) {
    if(n == 0)        // base case
        return 0;
    return (n % 10) + sumOfDigits(n / 10);  // recursive case
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Sum of digits of %d = %d", num, sumOfDigits(num));
    return 0;
}
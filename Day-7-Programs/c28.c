#include <stdio.h>

int reverse(int n, int rev) {
    if(n == 0)          // base case
        return rev;
    rev = rev * 10 + (n % 10);
    return reverse(n / 10, rev);  // recursive case
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Reverse of %d = %d", num, reverse(num, 0));
    return 0;
}
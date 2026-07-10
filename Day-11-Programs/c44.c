#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

// Recursive version - also asked often
/* 
int factorial(int n) {
    if(n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
*/

int main() {
    int num = 5;
    printf("Factorial of %d = %d", num, factorial(num));
    return 0;
}
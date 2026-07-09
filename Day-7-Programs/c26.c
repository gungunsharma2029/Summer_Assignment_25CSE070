#include <stdio.h>

int fibonacci(int n) {
    if(n == 0) return 0;      // base case 1
    if(n == 1) return 1;      // base case 2
    return fibonacci(n-1) + fibonacci(n-2);  // recursive case
}

int main() {
    int n;
    printf("Enter position n: ");
    scanf("%d", &n);
    
    printf("Fibonacci number at position %d = %d\n", n, fibonacci(n));
    
    printf("Fibonacci series: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
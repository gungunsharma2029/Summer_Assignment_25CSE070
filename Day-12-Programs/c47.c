#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next;
    
    printf("Fibonacci Series: ");
    for(int i = 0; i < n; i++) {
        if(i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
}

// Recursive version for nth term
/*
int fibonacci(int n) {
    if(n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
*/

int main() {
    int n = 7;
    fibonacci(n);
    return 0;
}
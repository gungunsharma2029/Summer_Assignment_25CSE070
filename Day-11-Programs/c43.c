#include <stdio.h>

int isPrime(int n) {
    if(n <= 1) return 0; // 0 and 1 are not prime
    
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int main() {
    int num = 17;
    if(isPrime(num))
        printf("%d is Prime", num);
    else
        printf("%d is Not Prime", num);
    return 0;
}
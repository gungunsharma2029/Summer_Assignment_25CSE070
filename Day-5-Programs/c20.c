#include <stdio.h>

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);
    
    long long maxPrime = -1;

    // Remove all factors of 2
    while(num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }

    // Check odd factors from 3 onwards
    for(long long i = 3; i * i <= num; i += 2) {
        while(num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }

    // If num > 2, then num itself is prime
    if(num > 2)
        maxPrime = num;

    printf("Largest prime factor: %lld\n", maxPrime);
    return 0;
}
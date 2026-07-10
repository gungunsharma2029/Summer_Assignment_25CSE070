#include <stdio.h>

int isPerfect(int n) {
    int sum = 0;
    
    // Find all divisors from 1 to n/2
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }
    
    return (sum == n);
}

int main() {
    int num = 28;
    if(isPerfect(num))
        printf("%d is a Perfect number", num);
    else
        printf("%d is Not a Perfect number", num);
    return 0;
}
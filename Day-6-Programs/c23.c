#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num > 0) {
        count += num & 1; // check if last bit is 1
        num >>= 1; // right shift by 1
    }
    
    printf("Number of set bits: %d", count);
    return 0;
}
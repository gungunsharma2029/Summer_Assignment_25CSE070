#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n, sum = 0;
    int digits = 0, temp = n;
    
    // Count digits
    while(temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = n;
    while(temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits); // For 3-digit use digit*digit*digit
        temp /= 10;
    }
    
    return (original == sum);
}

int main() {
    int num = 153;
    if(isArmstrong(num))
        printf("%d is an Armstrong number", num);
    else
        printf("%d is Not an Armstrong number", num);
    return 0;
}
    
  
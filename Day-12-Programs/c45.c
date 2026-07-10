#include <stdio.h>

int isPalindrome(int n) {
    int original = n, reversed = 0;
    
    while(n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    
    return (original == reversed);
}

int main() {
    int num = 121;
    if(isPalindrome(num))
        printf("%d is a Palindrome", num);
    else
        printf("%d is Not a Palindrome", num);
    return 0;
}
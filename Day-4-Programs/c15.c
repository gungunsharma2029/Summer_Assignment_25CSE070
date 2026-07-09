#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    
    // count digits
    for (original = num; original != 0; ++n) {
        original /= 10;
    }
    
    original = num;
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is NOT an Armstrong number\n", num);

    return 0;
}
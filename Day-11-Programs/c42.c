#include <stdio.h>

int maximum(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
    // Or just: return (a > b) ? a : b;
}

int main() {
    int x = 15, y = 25;
    printf("Maximum = %d", maximum(x, y));
    return 0;
}
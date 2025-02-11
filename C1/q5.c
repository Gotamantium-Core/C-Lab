#include <stdio.h>

// input a binary and display the dec equivalent
int main() {
    int bin; 
    int dec=0, base=1;

    printf("Enter binary: ");
    scanf("%d", &bin);

    int temp = bin;
    while (temp > 0) {
        int last = temp%10;
        dec += last * base;

        temp /= 10;
        base *= 2;
    }

    printf("%d in decimal: %d", bin, dec);
    return 0;
}



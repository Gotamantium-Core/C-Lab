#include <stdio.h>

// display binary equivalent of unsigned decimal int
int main() {
    int dec;

    printf("Enter dec: ");
    scanf("%d ", &dec);

    // lets assume a dec can only be 32 digits long at max
    int binDigits[32];

    int i=0;
    while (dec > 0) {
        binDigits[i] = dec%2;
        dec /= 2;
        i++;
        printf("%d \n", binDigits[i]);
    }

    // now binDigits has all the binary digits of dec. now we jus gotta print it
    int size = sizeof(binDigits) / sizeof(binDigits[0]);

    for (int i = size-1; i >= 0; i--) {
        printf("%d", binDigits[i]);
    }
    printf("\n");
    return 0;
}


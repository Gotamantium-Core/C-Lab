#include <stdio.h>

//Write a recursive function to find the binary equivalent 
// of a decimal and use it to convert an array of decimals to binaries
int convertToBinary(int dec) {
    if (dec == 0) {
        return 0;
    } else {
        return (dec%2 + (10 * convertToBinary(dec/2))); 
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i=0; i < n; i++) scanf("%d", &arr[i]);

    printf("Numbers and their binary equivalents: \n");
    for (int i=0; i < n; i++) {
        printf("%d : %d\n", arr[i], convertToBinary(arr[i]));
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

// Write a recursive function to find factorial and use it to find nCr
int factorial(int n) {
    if (n < 1) {
        return 1;
    } 
    return n * factorial(n-1);
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(n-r) * factorial(r));
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    if (r > n) {
        printf("Invalid inputs\n");
        return 0;
    }

    printf("%dC%d = %d", n, r, nCr(n, r));

    return 0;
}


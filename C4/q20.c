#include <stdio.h>
#include <math.h>

// Write a function to check if a number is prime and use it to display all primes in a matrix
int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i=2; i <= sqrt(n); i++) {
        if (n%i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int m, n;

    printf("Enter dimensions: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    printf("Enter matrix: \n");
    for (int i=0; i < m; i++) {
        for (int j=0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Primes are: ");
    for (int i=0; i < m; i++) {
        for (int j=0; j < n; j++) {
            if (isPrime(matrix[i][j])) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}


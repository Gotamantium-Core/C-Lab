#include <stdio.h>

//Display first N prime numbers

int isprime(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i=2; i < n; i++) {
        if (n%i == 0) {
            return 0;
        }
    } 

    return 1;
}

int main() {
    int N;
    int num=1, count=0;
    printf("Enter N: ");
    scanf("%d", &N);

    while (count < N) {
        if (isprime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");
    return 0;
}

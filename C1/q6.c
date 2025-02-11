#include <stdio.h>

// find perfect numbers till N
int isperfect(int n) {
    int factSum = 0;

    for (int i=1; i <= n; i++) {
        if (n%i == 0) {
            factSum += i;
        }
    }

    return (factSum == 2*n) ? 1 : 0;
}


int main() {

    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    for (int i=0; i < N; ++i) {
        if (isperfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}



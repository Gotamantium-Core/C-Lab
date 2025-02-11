#include <stdio.h>
#include <math.h>

int main() {
    int N;
    int count=0, num=2;
    printf("Enter N: ");
    scanf("%d", &N);

    while (count < N) {
        int isprime=1;
        for (int i=2; i <= sqrt(num); i++) {
            if (num%i == 0) {
                isprime = 0;
            }
        }

        if (isprime) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");
    return 0;
}



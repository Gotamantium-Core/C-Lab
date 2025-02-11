#include <stdio.h>

// find the min and max from a set of N numbers
int main() {
    int N, n1;

    printf("Enter number of numbers: ");
    scanf("%d", &N);

    printf("Enter number 1: ");
    scanf("%d", &n1);

    int min=n1;
    int max=n1;

    for (int i=1; i < N; i++) {
        int num;
        printf("Enter number %d: ", i+1);
        scanf("%d", &num);
        if (max < num) {
            max = num;
        }
        if (min > num) {
            min = num;
        }
    }

    printf("\nMin: %d \nMax: %d\n", min, max);
    return 0;
}



#include <stdio.h>
#include <math.h>

// display the palindrome numbers in a matrix
int main() {
    int m, n;
    printf("Enter dimensions of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    for (int i=0; i < m; i++) {
        for (int j=0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Palindromes are: ");

    // palindrome check
    int num;
    int isPalindrome=0;
    for (int i=0; i < m; i++) {
        for (int j=0; j < n; j++) {
            num = matrix[i][j];
            int temp=num, last, digits=0, rev=0;
            while (temp > 0) {
                temp /= 10;
                digits++;
            }
            // all 1 digit numbers are technically palindromes
            if (digits == 1) {
                printf("%d ", num);
                continue;
            }

            temp = num;
            int power = pow(10, digits-1);
            while (temp > 0) {
                last = temp %10;
                rev += last * power;

                temp /= 10;
                power /= 10;
            }

            if (rev == num) {
                printf("%d ", num);
            }

        }
    }
    printf("\n");

    return 0;
}

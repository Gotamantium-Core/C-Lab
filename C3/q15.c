#include <stdio.h>

// check if a square matrix is symmetric. if not display the transpose
int main() {
    int n;
    printf("Enter the order: ");
    scanf("%d", &n);

    printf("Enter matrix: \n");
    int matrix[n][n];
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    // calculating the transpose
    int transpose[n][n];
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // checking if symmetric    
    int symmetric=1;
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            if (matrix[i][j] != transpose[i][j]) {
                symmetric=0;
                break;
            }
        }
        if (!symmetric) {
            printf("Not symmetric\n\n");
            break;
        }
    }

    if (symmetric) {
        printf("Symmetric Matrix\n");
    } else {
        printf("Transpose: \n");
        for (int i=0; i < n; i++) {
            for (int j=0; j < n; j++) {
                printf("%d ", transpose[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

    
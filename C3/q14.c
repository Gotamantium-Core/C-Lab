#include <stdio.h>

// find the largest element in a m x n matrix
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

    int max = matrix[0][0];
    int posx=1, posy=1;
    for (int i=0; i < m; i++) {
        for (int j=0; j < n; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                posx = i+1;
                posy = j+1;
            }
        }
    }

    printf("Max is %d at position (%d, %d)", max, posx, posy);
    return 0;
}
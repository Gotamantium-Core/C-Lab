#include <stdio.h>

void inputMatrix(int arr[10][10], int m, int n);
void multiplyMatrix(int arr1[10][10], int arr2[10][10], int res[10][10], int m, int n, int q);
void displayMatrix(int mat[10][10], int m, int n);

void main() {
    int m, n, p, q;
    int mat1[10][10], mat2[10][10], res[10][10];

    printf("Enter dimensions of 1: ");
    scanf("%d %d", &m, &n);

    printf("Enter dimensions of 2: ");
    scanf("%d %d", &p, &q);

    if (n != p) return;

    printf("Input matrix 1: \n");
    inputMatrix(mat1, m, n);

    printf("Input matrix 2: \n");       
    inputMatrix(mat2, p, q);
    
    multiplyMatrix(mat1, mat2, res, m, n, q);

    printf("Result: \n");
    displayMatrix(res, m, q);
}

void inputMatrix(int arr[10][10], int m, int n) {
    for (int i=0; i < m; i++) 
        for (int j=0; j < n; j++) 
            scanf("%d", &arr[i][j]);
}

void multiplyMatrix(int arr1[10][10], int arr2[10][10], int res[10][10], int m, int n, int q) {
    for (int i=0; i < m; i++)
        for (int j=0; j < q; j++) {
            res[i][j] = 0;
            for (int k=0; k < n; k++) 
                res[i][j] += arr1[i][k] * arr2[k][j];
        }
}

void displayMatrix(int mat[10][10], int m, int n) {
    for (int i=0; i < m; i++) {
        for (int j=0; j < n; j++) 
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}
#include <stdio.h>

// Write a function to find the maximum in an array 
// and use it to find the maximum in each row of a m x n matrix
int findMax(int arr[], int n);

void main() {
    int m, n;
    int mat[10][10];

    printf("Enter dimensions: ");
    scanf("%d %d", &m, &n);

    for (int i=0; i < m; i++) 
        for (int j=0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (int i=0; i < m; i++) {
        for (int j=0; j < n; j++) 
            printf("%d ", mat[i][j]);
        
        printf("| max = %d\n", findMax(mat[i], n));
    }
}

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i=0; i < n; i++) {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}
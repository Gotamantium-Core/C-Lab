#include <stdio.h>

// merge 2 sorted arrays such that the resultant array is also sorted
void addRemaining(int final[], int arr[], int k, int startpos, int size) {
    for (int i=k; i < size; i++) {
        final[i] = arr[startpos];
        startpos++;
    }
}

int main() {
    int m, n;

    printf("Enter number of elements: ");
    scanf("%d", &m);

    int arr1[m];
    for (int i=0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr2[n];
    for (int i=0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int finalArr[m+n];
    int i=0, j=0, k=0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            finalArr[k] = arr1[i];
            i++;
        } else {
            finalArr[k] = arr2[j];
            j++;
        }
        k++;
    }

    // check which array is exhausted
    // 1 means arr1 is exhausted, 2 means arr2
    int check = (i == m) ? 1 : 2;

    if (check == 1) {
        addRemaining(finalArr, arr2, k, j, m+n);
    } else if (check == 2) {
        addRemaining(finalArr, arr1, k, i, m+n);
    }

    printf("{");
    for (int i=0; i < m+n; i++) {
        printf(" %d ", finalArr[i]);
    }
    printf("}\n\n");
    return 0;
}


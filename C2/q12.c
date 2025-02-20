#include <stdio.h>

// do set operations in C
void displaySet(int set[], int size) {
    printf("{");
    for (int i=0; i < size; i++) {
        printf(" %d ", set[i]);
    }
    printf("}\n\n");
}

void main() {
    int m, n;

    printf("Enter number of elements in A: ");
    scanf("%d", &m);

    int A[m];
    printf("Enter elements of A: ");
    for (int i=0; i < m; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter number of elements in B: ");
    scanf("%d", &n);
    
    int B[n];
    printf("Enter elements of B: ");
    for (int i=0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    // union
    int UnionSet[20];
    int k=0;
    for (int i=0; i < m; i++) {
        UnionSet[k] = A[i];
        k++;
    }

    for (int i=0; i < n; i++) {
        int duplicateFound=0;
        for (int j=0; j < m; j++) {
            if (B[i] == A[j]) {
                duplicateFound=1;
                break;
            }
        }
        if (!duplicateFound) {
            UnionSet[k] = B[i];
            k++;
        }
    }

    // displaying the set
    printf("A U B: ");
    displaySet(UnionSet, k);

    // intersection
    int intersectionSet[10];
    int l=0, sameElement=0;

    for (int i=0; i < m; i++) {
        sameElement=0;
        for (int j=0; j < n; j++) {
            if (A[i] == B[j]) {
                sameElement=1;
                break;
            }
        }
        if (sameElement) {
            intersectionSet[l] = A[i];
            l++;
        }
    }

    printf("A n B: ");
    displaySet(intersectionSet, l);


    // difference
    int DifferenceSet[10];
    int d=0, duplicate=0;

    for (int i=0; i < m; i++) {
        duplicate=0;
        for (int j=0; j < n; j++) {
            if (A[i] == B[j]) {
                duplicate=1;
                break;
            }
        }
        if (!duplicate) {
            DifferenceSet[d] = A[i];
            d++;
        }
    }

    printf("A - B: ");
    displaySet(DifferenceSet, d);
}
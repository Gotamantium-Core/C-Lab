#include <stdio.h>
#include <stdlib.h>
// binary search
int comp(const void* a,const void* b) {
    return *(int*)a - *(int*)b;
}

void binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size-1;

    while (left < right) {
        int mid = (left + right)/2;
        if (target == arr[mid]) {
            printf("Element found at %d\n", mid);
            return;
        } else if (target < arr[mid]) {
            right = mid-1;
        } else {
            left = mid+1;
        }
    }
    printf("Element not found\n");
    
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    int arr[n];
    for (int i=0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int),comp);

    int target;
    printf("Enter target: ");
    scanf("%d", &target);

    binarySearch(arr, n, target);

    return 0;
}


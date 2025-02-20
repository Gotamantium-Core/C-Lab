#include <stdio.h>

// bubble sort
void bubbleSort(int arr[], int size) {
    for (int i=0; i < size; i++) {
        int swapped=0;
        for (int j=0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }

        if (!swapped) {
            return;
        }
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i=0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    for (int i=0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


#include <stdio.h>


// do linear search and show appropriate outputs
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    // searching time
    int N = sizeof(arr) / sizeof(arr[0]);
    int search;
    int found = -1;

    printf("Enter search: ");
    scanf(" %d", &search);

    for (int i=0; i < N; i++) {
        if (search == arr[i]) {
            found = i;
        }
    }

    if (found > -1) {
        printf("Element found at %d", found);
    } else {
        printf("Not found");
    }
    return 0;
}

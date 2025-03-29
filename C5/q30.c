#include <stdio.h>
#include <stdlib.h>

// Write a program to find the 2nd largest in an array of integers using a command line argument (pointers)

int secondLargest(int [], int);

void main(int argc, char* argv[]) {
    int arr[argc-1];
    for (int i=0; i < argc; i++)
        arr[i] = atoi(argv[i+1]);

    printf("\nSecond largest: %d\n", secondLargest(arr, argc-1));
}

int secondLargest(int arr[], int n) {
    int fl=arr[0], sl=arr[0];
    for (int i=0; i < n; i++) {
        if (arr[i] > fl) {
            sl = fl;
            fl = arr[i];
        } else if (arr[i] > sl) {
            sl = arr[i];
        }
    }

    return sl;
}

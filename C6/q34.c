#include <stdio.h>

/*
An unformatted data file "num.dat" contains ints written with putw(). 
Write a program to display the numbers stored in the file and also display the numbers in ascending order
*/

void sort(int [], int);

void main() {
    FILE *f;
    f = fopen("num.dat", "r");

    char ch;
    int nums=0;

    // count the number of lines in file = number of numbers
    while ((ch = getc(f)) != EOF)
        if (ch == '\n')
            nums++;
    if (nums > 0 && ch != '\n')
        nums++;
    printf("%d\n", nums);

    int arr[nums], i=0;
    fseek(f, 0, 0);
    while ((fscanf(f, "%d", &arr[i])) != EOF) {
        i++;
    }

    sort(arr, nums);
    for (i=0; i < nums; i++)   
        printf("%d ", arr[i]);
    fclose(f);
}

void sort(int arr[], int n) {
    for (int i=0; i < n; i++)
        for (int j=i+1; j < n; j++) 
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}
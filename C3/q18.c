#include <stdio.h>
#include <string.h>

// sort the alphabets in a string in lexicographic order
int main() {
    char string[100];

    printf("Enter string: ");
    scanf("%[^\n]", string);

    int len = strlen(string);
    
    for (int i=0; i < len; i++) {
        for (int j=i+1; j < len; j++) {
            if (string[i] > string[j]) {
                char temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }

    printf("Sorted string: %s", string);
    return 0;
}

    
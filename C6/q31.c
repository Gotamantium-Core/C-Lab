#include <stdio.h>

// Use command line arguments to copy the contents of 
// one file to another after converting all lowercase characters to uppercase

void main(int argc, char* argv[]) {
    FILE *input, *output;

    input = fopen(argv[1], "r");
    output = fopen(argv[2], "w");

    if (input == NULL || output == NULL) {
        printf("Nigga u gon pmo fr\n");
        return;
    }
    char ch;
    while (EOF != (ch = getc(input))) {
        if (ch >= 'a' && ch <= 'z')
            ch -= 32;
        putc(ch, output);
    }

    fclose(input);
    fclose(output);
}

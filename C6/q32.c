#include <stdio.h>

// Implement the wc command from unix
void doCounting(FILE *);

int main(int argc, char* argv[]) {
    if (1 == argc) {
        doCounting(stdin);
        printf("./a.exe\n"); // replace with ./a.out for linux
        return 0;
    }

    FILE* f;
    f = fopen(argv[1], "r");

    doCounting(f);
    printf("%s\n", argv[1]);

    fclose(f);
    return 0;
}

void doCounting(FILE *f) {
    // counters
    int lines=0, words=0, chars=0; 

    // for convenience
    char ch;
    int inword=0;
    while ((ch = getc(f)) != EOF) {
        if (ch == '\n')
            lines++;
        
        // if ch is a whitespace, its out of a word
        // if not AND isword is 0, its inside a word
        if (ch == '\n' || ch == '\t' || ch == ' ')
            inword=0;
        else if (inword == 0) {
            inword=1;
            words++;
        }
        chars++;
    }

    // edge case if the file/stdin doesn't end with a newline
    if (chars > 0 && ch != '\n')
        lines++;

    printf("%d\t%d\t%d\t", lines, words, chars);
}
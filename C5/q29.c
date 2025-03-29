#include <stdio.h>
/*
Implement the following string functions using pointers (pointers)
Si.No	Function	Definition
1.	string length	(int StringLength(char* s))
2.	string copy	(void StringCopy(char* s1, char* s2))
3.	string comparison	(int StringCompare(char* s1, char* s2))
4.	string concatenation	(void StringConcat(char* s1, char* s2))
*/

#define sf "xyz"
#define ss "abc"

int StringLength(char *);
void StringCopy(char *, char *);
int StringCompare(char *, char *);
void StringConcat(char *, char *);


int main() {
    char* s = "string1";
    char* s1 = "String 2";
    char s2[30];
    char e[] = "string";
    char d[] = "nuh uh";

    printf("Length of (%s): %d\n", s, StringLength(s));


    StringCopy(s2, s);
    printf("Copied %s = %s\n", s, s2);


    printf("Compare %s %s: %d \n", sf, ss, StringCompare(sf, ss));

    
    StringConcat(e, d);
    printf("Concatenated: %s\n", e);
    return 0;
}

int StringLength(char * s) {
    int len=0;
    for (len; s[len] != '\0'; len++);
    return len;
}

void StringCopy(char * s1, char * s2) {
    int i=0;
    while (s2[i] != '\0') {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

int StringCompare(char * s1, char * s2) {
    for (int i=0; s1[i] != '\0'; i++)
        if (s1[i] != s2[i]) {
            if (s1[i] > s2[i])
                return 1;
            else
                return -1;
        }
    return 0;
}

void StringConcat(char * s1, char * s2) {
    s1 = s1 + StringLength(s1);

    while (*s1++ = *s2++);
}



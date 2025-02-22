#include <stdio.h>

// find the most frequently occuring alphabet in a string without case checking
int main() {
    char string[100];

    int freq[26];
    for (int i=0; i < 26; i++) freq[i] = 0;

    printf("Enter string: ");
    scanf("%[^\n]", string);

    int max=freq[0];
    char maxChar;
    for (int i=0; string[i] != '\0'; i++) {
        char ch = string[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch >= 'A' &&  ch <= 'Z') {
                ch += 32;
            }
            freq[ch - 'a']++;

            if (freq[ch -'a'] > max) {
                maxChar = ch;
                max = freq[ch-'a'];
            }
        }
    }

    printf("\n%c appears %d times", maxChar, max);
    return 0;
}
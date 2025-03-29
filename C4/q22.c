#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]);
void findPalindromes(char sentence[]);

int main() {
    char sentence[100];

    printf("Enter sentence: ");
    scanf(" %[^\n]", sentence);

    printf("Palindromes in the sentence:\n");
    findPalindromes(sentence);
    return 0;
}

int isPalindrome(char str[]) {
    int left = 0, right = strlen(str) - 1;
    
    while (left < right) {
        // Convert to lowercase manually
        char leftChar = (str[left] >= 'A' && str[left] <= 'Z') ? str[left] + 32 : str[left];
        char rightChar = (str[right] >= 'A' && str[right] <= 'Z') ? str[right] + 32 : str[right];

        if (leftChar != rightChar) return 0;
        
        left++;
        right--;
    }
    return 1;
}

void findPalindromes(char sentence[]) {
    char word[50];  
    int index = 0;
    
    for (int i = 0; sentence[i] != '\0'; i++) {
        if ((sentence[i] >= 'A' && sentence[i] <= 'Z') || (sentence[i] >= 'a' && sentence[i] <= 'z')) {
            word[index++] = sentence[i];
        } else if (index > 0) {
            word[index] = '\0';
            if (isPalindrome(word)) {
                printf("%s\n", word);
            }
            index = 0;
        }
    }
        
    if (index > 0) { 
        word[index] = '\0';
        if (isPalindrome(word)) {
            printf("%s\n", word);
        }
    }
}

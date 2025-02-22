#include <stdio.h>
#include <string.h>

// Input N student names and sort them using exchange sort (strings)
int main() {
    int n;
    int MAX_STRING_LENGTH = 40;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // array of strings
    char StudentArray[n][MAX_STRING_LENGTH];

    // one student
    char student[MAX_STRING_LENGTH];

    for (int i=0; i < n; i++) {
        printf("Enter student %d: ", i+1);
        scanf(" %[^\n]", student);

        strcpy(StudentArray[i], student);
    }

    // sorting starts here
    char temp[MAX_STRING_LENGTH];
    for (int i=0; i < n; i++) {
        for (int j=i+1; j < n; j++) {
            if (strcmp(StudentArray[i], StudentArray[j]) > 0) {
                strcpy(temp, StudentArray[i]);
                strcpy(StudentArray[i], StudentArray[j]);
                strcpy(StudentArray[j], temp);
            }
        }
    }

    printf("Sorted names: ");

    for (int i=0; i < n; i++) printf("%s ", StudentArray[i]);

    return 0;
}


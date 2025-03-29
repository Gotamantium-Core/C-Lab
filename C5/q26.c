#include <stdio.h>

// Store register number, name, and 4 marks for a set of students using an 
// array of structure and display the details with marks in descending order
typedef struct {
    int rno;
    char name[30];
    int marks[4];
}Student;

void displayStudents(Student s[], int n);
void sortMarks(int marks[], int n);

void main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);
    
    Student students[n];

    for (int i=0; i < n; i++) {
        printf("Enter roll no: ");
        scanf("%d", &students[i].rno);

        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);
        
        printf("Enter 4 marks: ");
        for (int j=0; j < 4; j++)
        scanf("%d", &students[i].marks[j]);
    }
    
    printf("\n\n");
    displayStudents(students, n);
    
}

void displayStudents(Student s[], int n) {
    for (int i=0; i < n; i++) {
        printf("Register No: %d \nName: %s \nMarks: ", s[i].rno, s[i].name);

        sortMarks(s[i].marks, 4);
        for (int j=0; j < 4; j++)
            printf("%d ", s[i].marks[j]);
        printf("\n\n");
    }
}

void sortMarks(int marks[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (marks[i] < marks[j]) {  // Swap if needed
                int temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }
}
#include <stdio.h>

/*
A text file named "student.dat" contains data in the following format:
RegNo | Name | Mark 1 | Mark 2 | Mark 3 | Mark 4 | Mark 5 | Mark 6
Input a register number and display all the marks. 
Use a loop to continue asking for inputs
*/

void search(int, FILE *);

void main() {
    int n;
    FILE *f;
    f = fopen("student.dat", "r");
   
    int cont=1;
    while (cont) {
        printf("Enter reg no: ");
        scanf("%d", &n);
        search(n, f);
        printf("Wanna continue?: ");
        scanf("%d", &cont);
    }
    fclose(f);
}

void search(int rno, FILE *f) {
    fseek(f, 0, 0);
    int reg, m1, m2, m3, m4, m5, m6, found=0;
    char name[30];
    while ((fscanf(f, "%d | %s |%d|%d|%d|%d|%d|%d", &reg, name, &m1, &m2, &m3, &m4, &m6, &m6)) != EOF)
        if (reg == rno) {
            printf("%d, %s\n%d %d %d %d %d %d\n\n", reg, name, m1, m2, m3, m4, m5, m6);
            found=1;
            return;
        }
    if (!found)
        printf("Register number not found\n");
    
    fseek(f, 0, 0);
}

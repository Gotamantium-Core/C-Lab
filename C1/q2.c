#include <stdio.h>

/*input a date and validate it*/

int main() {
    int dd, mm, yyyy;
    int valid=1, leap=0;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    int dim=0;

    if (yyyy < 0 || yyyy > 9999) {
        valid = 0;
    }

    if (mm < 1 || mm > 12) {
        valid = 0;
    }

    if ((yyyy%4 == 0 && yyyy%100 != 0) || (yyyy%400 ==0)) {
        leap = 1;
    }

    switch (mm) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dim = 31;
            break;
        case 4: case 6: case 9: case 11:
            dim = 30;
            break;
        case 2:
            dim = (leap) ? 29 : 28;
            break;
    }

    if (dd > dim || dd < 1) {
        valid = 0;
    }

    if (valid) {
        printf("Date (%d/%d/%d) is valid\n", dd, mm, yyyy);
    } else {
        printf("Date (%d/%d/%d) is invalid\n", dd, mm, yyyy);
    }

    return 0;
}
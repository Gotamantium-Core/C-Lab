#include <stdio.h>

// Define a structure for storing the coefficients and exponents of a 
// polynomial expression. Use it to add 2 polynomials
typedef struct {
    int coeff;
    int exp;
} Term;

int readPolynomial(Term poly[]);
void displayPolynomial(Term poly[], int n);
int addPolynomials(Term poly1[], int n1, Term poly2[], int n2, Term res[]);


void main() {
    Term poly1[10], poly2[10], res[20];
    int n1, n2, n3;

    printf("Polynomial 1\n");
    n1 = readPolynomial(poly1);

    
    printf("Polynomial 2\n");
    n2 = readPolynomial(poly2);

    n3 = addPolynomials(poly1, n1, poly2, n2, res);

    printf("\nFirst Polynomial: ");
    displayPolynomial(poly1, n1);

    printf("Second Polynomial: ");
    displayPolynomial(poly2, n2);

    printf("Sum of Polynomials: ");
    displayPolynomial(res, n3);

}


int readPolynomial(Term poly[]) {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Enter terms (coefficient, exponent): ");
    for (int i=0; i < n; i++) scanf("%d %d", &poly[i].coeff, &poly[i].exp);
    return n;
}


void displayPolynomial(Term poly[], int n) {
    for (int i=0; i < n; i++) {
        printf("%dx^%d", poly[i].coeff, poly[i].exp);
        if (i != n-1) printf(" + ");
    }
    printf("\n");
}


int addPolynomials(Term poly1[], int n1, Term poly2[], int n2, Term res[]) {
    int i=0, j=0, k=0;

    while (i < n1 && j < n2) {
        if (poly1[i].exp > poly2[j].exp) {
            res[k] = poly1[i];
            i++, k++;
        } else if (poly1[i].exp < poly2[j].exp) {
            res[k] = poly2[j];
            j++, k++;
        } else {
            res[k].exp = poly1[i].exp;

            res[k].coeff = poly1[i].coeff + poly2[j].coeff;
            if (res[k].coeff != 0) k++;
            i++, j++;
        }
    }

    while (i < n1) {
        res[k] = poly1[i];
        i++, k++;
    }

    while (j < n2) {
        res[k] = poly2[j];
        j++, k++;
    }

    return k;
}

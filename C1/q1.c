#include <stdio.h>
#include <math.h>

// find roots of quadratic equation
int main() {
    int a, b, c, D;

    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    D = b*b - 4*a*c;

    if (D > 0) {
        printf("Roots are real and distinct\n");

        float r1, r2;

        r1 = (-b + sqrt(D)) / (2.0*a);
        r2 = (-b - sqrt(D)) / (2.0*a);
        printf("Roots: %.1f, %.1f", r1, r2);

    } else if (D == 0) {
        printf("Roots are real and equal\n");

        float root;

        root = -b / (2.0 * a);
        printf("Root: %.1f", root);

    } else {
        printf("Roots are complex\n");

        float re, im1, im2;

        re = -b/(2.0 * a);

        im1 = sqrt(-D) / (2.0 * a);
        im2 = -sqrt(-D) / (2.0 * a);

        printf("Roots: %.1f + %.1fi, %.1f + %.1fi", re, im1, re, im2);
    }
    return 0;
}
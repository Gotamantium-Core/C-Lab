#include <stdio.h>

// Define a struct for storing a complex number. 
// Use it to find the sum, difference, and product of 2 complex numbers

typedef struct {
    int re;
    int im;
} Complex;

Complex multiply(Complex, Complex);

int main() {
    Complex z1, z2, res;

    printf("Enter complex number 1: ");
    scanf("%d %d", &z1.re, &z1.im);
    
    printf("Enter complex number 2: ");
    scanf("%d %d", &z2.re, &z2.im);


    // product
    res = multiply(z1, z2);

    printf("Add: (%d %d) \nSubtract: (%d %d) \nProduct: (%d %d)\n", z1.re+z2.re, z1.im+z2.im, z1.re-z2.re, z1.im-z2.im, res.re, res.im);

    return 0;
}

Complex multiply(Complex a, Complex b) {
    Complex res;
    res.re = (a.re * b.re) - (a.im * b.im); 
    res.im = (a.re * b.im) + (a.im * b.re); 
    return res;
}
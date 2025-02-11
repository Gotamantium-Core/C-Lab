#include <stdio.h>

// find GCD and LCM of two numbers
int main() {

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int temp_a=a, temp_b=b;

    while (temp_b > 0) {
        int temp = temp_b;
        temp_b = temp_a%temp_b;
        temp_a = temp;
    }

    int gcd = temp_a;

    int lcm = (a*b) / gcd;

    printf("For %d and %d: \nGCD: %d\nLCM: %d\n", a, b, gcd, lcm);
    return 0;
}



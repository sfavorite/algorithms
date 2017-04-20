// Get the greatest common divisor of two positive integers
// using the
#include <stdio.h>


int gcd(int u, int v) {
    while (u != v) {
        if (u > v) {
            printf("%d - %d = %d\n", u, v, u - v);
            u = u - v;
        }
        else {
            printf("%d - %d = %d\n", v, u, v - u);
            v = v - u;
        }
    }
    return u;
}

int main() {
    int x, y;

    printf("Enter two positive integers: ");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
        printf("GCD of %d and %d is %d\n", x, y, gcd(x, y));
}

#include <stdio.h>

int gcd(int u, int v) {

    int temp;

    // Once u is zero we have our gcd value
    while (u > 0) {
        // Make sure u is larger or equal to v
        if (u < v) {
            temp = u;
            u = v;
            v = temp;
        }
        printf("%d %% %d = %d\n", u, v, u % v);
        // New value of u
        u = u % v;
    }
    return v;
}

int main() {
    int x, y;

    printf("Enter two positive integers: ");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
        printf("GCD of %d and %d is %d\n", x, y, gcd(x, y));
}

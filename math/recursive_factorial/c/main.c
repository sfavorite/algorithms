#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE = 20;

// Recursive factorial
long fact(int n) {
    // If n is 1 return the factorial of one - which is one
    if (n <= 1)
        return 1;

    // We haven't reached the 'bottom' which is one
    // So subtract 1 from n (n - 1) and multiple by n
    return n * fact(n - 1);
}

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer (max of %d): ", MAX_SIZE);
    scanf("%d",&n);

    // If n is negative someone didn't read directions
    // Multiply by negative one and move on with your day.
    if (n < 0) {
        n *= -1;
    }

    if (n <= MAX_SIZE) {

        factorial = fact(n);

        printf("Factorial of %d = %llu\n", n, factorial);
    } else {
        printf("Can only handle integers up to %d.\n", MAX_SIZE);
        printf("You entered: %d\n", n);
    }
    return EXIT_SUCCESS;
}

// Collatz Conjecture - start with a number greater than 1

// For instance, starting with n = 12,
// the sequence 12, 6, 3, 10, 5, 16, 8, 4, 2, 1 is the result

// https://en.wikipedia.org/wiki/Collatz_conjecture

#include <stdio.h>
#include <stdlib.h>


int main() {

    int n;
    int count = 0;
    unsigned long long result;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    result = n;
    while (result != 1) {
        count += 1;
        // Odd number
        if (result % 2) {
            result = (3 * result + 1);
        } else {
            result = result / 2;
        }
        printf("%d) result is %llu\n", count, result);
    }
    return EXIT_SUCCESS;
}

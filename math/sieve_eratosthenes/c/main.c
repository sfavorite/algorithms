#include <stdio.h>
#include <stdlib.h>

#define N 30

int main() {
    int i, j;
    int a[N + 1];

    for (a[1] = 0, i = 2; i <= N; i++)
        a[i] = 1;

    // Step through each number starting at 2 upto N since which is consider the first prime.
    for (i = 2; i <= N / 2; i++)
        // Is a[i] already marked as composite
        if (a[i])
            for (j = 2; j <= N / i; j++)
                // The value of i * j is composite so mark as not prime (zero)
                a[i * j] = 0;

    // Print the primes
    for (i = 1; i <= N; i++)
        if (a[i])
            printf("%4d\n", i);


}

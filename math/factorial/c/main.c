#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer (max of 65): ");
    scanf("%d",&n);

    // If n is negative someone didn't read directions
    // Multiply by negative one and move on with your day.
    if (n < 0) {
        n *= -1;
    } recursive
    if (n <= 65) {
        for(i=1; i<=n; ++i) {

            factorial = i * factorial;
        }

        printf("Factorial of %d = %llu\n", n, factorial);
    } else {
        printf("Can only handle integers up to 65.\n");
        printf("You entered: %d\n", n);
    }
    return EXIT_SUCCESS;
}

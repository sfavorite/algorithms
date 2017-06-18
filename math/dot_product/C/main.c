#include <stdio.h>
#include <stdlib.h>

int dot_product(int *a, int *b, size_t n)
{
        int sum = 0;
        size_t i;

        for (i = 0; i < n; i++) {
                sum += a[i] * b[i];
        }

        return sum;
}

int
main(void)
{
        int a[3] = { 1, 2, 5 };
        int b[3] = { 3, 4, 5 };

        printf("%d\n", dot_product(a, b, sizeof(a) / sizeof(a[0])));

        return EXIT_SUCCESS;
}

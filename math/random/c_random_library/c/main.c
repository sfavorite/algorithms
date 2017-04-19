// Generate a random number between 1 and 10
// This uses the high order bits of the random number only.
// See Numerical Recipes in C by William H. Press
// Chapter 7 'Random Number' page 277


#include <stdlib.h>
#include <stdio.h>
#include <time.h>


// If on a unix style system you can call /dev/urandom
int unix_randomize() {
    unsigned int randval;
    FILE *f;

    f = fopen("/dev/urandom", "r");
    fread(&randval, sizeof(randval), 1, f);
    fclose(f);
    return randval;

}

// If /dev/urandom is not avaliable or you are not sure
// use time for initilization.
int all_systems_randomize() {
    time_t t;

    return (unsigned) time(&t);
}

int main() {
    int i, j;
    time_t t;

    srand(unix_randomize());

    printf("Max random value: %d\n", RAND_MAX);

    for (i = 0; i < 15; i++) {
        j = 1 + (int) ( 10.0 * rand()/ (RAND_MAX + 1.0));
        printf("Random number %d\n", j);
    }
}

# Generate a random number between 1 and 10

Using the C standard library rand() function generate a random number between
1 and 10.

This implementation uses only the high order bits of the result from rand() to
generate the number. Must implementations use linear congruential generators which
often have the least significant bits less random than the most significant. For

// This uses the high order bits of the random number only.
// See Numerical Recipes in C by William H. Press
// Chapter 7 'Random Number' page 277


Notes.
1. [Linear Congruential genrator (Wikipedia)](https://en.wikipedia.org/wiki/Linear_congruential_generator)
2. Numerical Recipes in C by William H. Press 

# Collatz Conjecture

Start with a number (n) greater than 1, if the number is even (divisible by 2) divide n by 2 (n/2).
If n is odd, multiple n by 3 and add 1 (3n + 1). Repeat this process until n becomes 1.

## Parity sequence optimization

This implementation uses parity sequence optimization which is a small modification of the from.

If n is congruent to zero (0) modulo 2 then: n/2
If n is congruent to one (1) modulo 2 then: (3n + 1) / 2

Since 3n + 1 is always even we can divide it by 2.


# https://en.wikipedia.org/wiki/Collatz_conjecture

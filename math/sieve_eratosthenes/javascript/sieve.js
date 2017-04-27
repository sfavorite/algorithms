
const N = 30;

var i;
var j;
// Set up an array to hold 1 for prime 0 for not prime.
zero_to_N = Array.apply(null, Array(N)).map(Number.prototype.valueOf, 1)

// Step through each number starting at 2 upto N since which is consider the first prime.
for (i = 2; i <= N; i++) {
    if (zero_to_N[i]) {
        for (j = 2; j < N / 2; j++) {
            // The value of i * j is composite so mark as not prime (zero)
            zero_to_N[i * j] = 0;
        }
    }
}

for (i = 2; i <= N; i++) {
    if (zero_to_N[i])
        console.log(i)
}

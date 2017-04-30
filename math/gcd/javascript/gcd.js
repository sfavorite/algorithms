// Get the greatest common divisor of two positive integers


function gcd(u, v) {
    while (u != v) {
        if (u > v) {
            console.log("%d - %d = %d\n", u, v, u - v);
            u = u - v;
        }
        else {
            console.log("%d - %d = %d\n", v, u, v - u);
            v = v - u;
        }
    }
    return u;
}

console.log(gcd(21, 49));


const sigmoid = function(value) {
    return (1 / (1 + Math.exp(-value)))
}

console.log("Sig2: " + sigmoid(0.458));

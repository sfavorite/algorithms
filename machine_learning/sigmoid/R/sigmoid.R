# Sigmoid function
# https://en.wikipedia.org/wiki/Logistic_function
sigmoid <- function(x) {
    1 / (1 + exp(-x))
}

# Print value from sigmoid (approx 0.6125)
print(sigmoid(0.458))

# Plot x and y along sigmoid
x = seq(-10, 10, .5)
s = {}
for (i in 1:length(x)) {
    print(i)
    s[i] <- sigmoid(x[i])
}

plot(x, s)

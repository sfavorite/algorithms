# Sigmoid function
# https://en.wikipedia.org/wiki/Logistic_function
sigmoid <- function(x) {
    1 / (1 + exp(-x))
}

# Print value from sigmoid (approx 0.6125)
print(sigmoid(0.458))

# Generate some 'data'
x = seq(-10, 10, .5)
s = {}

# Compute value of sigmoid which will become our y axis
for (i in 1:length(x)) {
    s[i] <- sigmoid(x[i])
}
# Plot x and y along sigmoid
plot(x, s)



MinMaxScaling <- function(x) {
      return (apply(x, MARGIN = 2, FUN = function(x) (x - min(x))/diff(range(x))))
}

X = matrix(c(1.0, -1.0, 2.0, 2.0, 0.0, 0.0, 0.0, 1.0, -1.0), ncol=3, byrow=TRUE)

y = MinMaxScaling(X)
y

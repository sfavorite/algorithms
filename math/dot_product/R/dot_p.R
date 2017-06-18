dot_product <- function(x, y) {
      n <- length(x) 
      
      if (length(y) != n) {
            stop("Arrays must match in size")
      } 
      return (sum(x*y))
}

x <- c(1, 2, 5)
y <- c(3, 4, 5)


dot_product(x, y)

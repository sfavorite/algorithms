#!/usr/bin/env python

# Compute some generally linear (whatever that means) points
# and compute a linear function to 'match' the points.
# This type of data is nice for testing/tutorials.

import numpy as np
import matplotlib.pyplot as plt

# How many points do you want?
data_size = 200

# Create the data

# Random X values between -35 and 35
X = np.random.uniform(-35, 35, size=data_size)
# Compute the y values using the linear function of 3 * X + 2
y = 3 * X + 2

# To compute the random points multiply the out of our linear function
# by -/+ 20 times a random number (0.0, 1.0]

# A will be either -/+ 20
a = np.random.choice([-1, 1], size=data_size) * 20

# Finish computing points by random * -/+ 20 from above plus the
# y value of the linear funciton from above
points =  np.random.random(size=data_size) * a + y

# Plot the points
plt.plot(X, points, 'ro')
# Plot the linear function
plt.plot(X, y)
plt.show()

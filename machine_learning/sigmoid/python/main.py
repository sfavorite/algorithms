#!/usr/bin/env python
# https://en.wikipedia.org/wiki/Logistic_function

from math import exp
from scipy.special import expit

def sigmoidFromScratch(x):
    if x >= 0:
        z = exp(-x)
        return 1 / (1 + z)
    else:
        z = exp(x)
        return z / (1 + z)



# Value using sigmoidFromScratch
print("Scratch: " + str(sigmoidFromScratch(0.458)))
# Value using scipy library
print("  Scipy: " + str(expit(0.458)))

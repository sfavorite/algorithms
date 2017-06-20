#!/usr/bin/env python
import numpy as np

def MinMaxScaler(x):
    return (x - x.min(axis=0)) / (x.max(axis=0) - x.min(axis=0))


X = np.array([[ 1., -1.,  2.], [ 2.,  0.,  0.], [ 0.,  1., -1.]])
y = MinMaxScaler(X)
print(y)

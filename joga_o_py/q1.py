import numpy as np

A = np.array([[2, 3],
              [1, 4],
              [5, 2]])

B = np.array([[10],
              [20]])
custoTotal = np.dot(A, B)
print(custoTotal)
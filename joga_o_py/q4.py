import numpy as np

A = np.array([[1, 2, 1],
              [4, 6, 1],
              [5, 3, 1]
              ])

detA = np.linalg.det(A)
print(detA)

area = 0.5 * np.abs(detA)

print(area)
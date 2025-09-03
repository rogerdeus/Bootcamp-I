import numpy as np

A = np.array([[50, 40],
              [30, 20]])
B = np.array([[60, 35],
             [25, 30]])
C = np.array([[2, 3],
              [2, 3]])

soma_total = A + B

produtoA = A * C
produtoB = B * C

print(f"O valor da soma total é: {soma_total}")
print(f"O peso fo produto A é: {produtoA}")
print(f"O peso do produto B é : {produtoB}")

import numpy as np

A = np.array([[2, 1], [1, 3]])
B = np.array([5, 10])

solucao = np.linalg.solve(A, B)
x = solucao[0]
y = solucao[1]

print(f"As solucções desse sistema são x = {x} e y = {y}")
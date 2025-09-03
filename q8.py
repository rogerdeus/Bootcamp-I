import numpy as np

sistema = np.array([[1, 1, 0],
[0, 2, 1],
[1, 1, 1]])
valFinais = np.array([18, 20, 25])

precos = np.linalg.solve(sistema, valFinais)

print(f"Preço do sanduíche (x): R$ {precos[0]:.2f}")
print(f"Preço do suco (y): R$ {precos[1]:.2f}")
print(f"Preço da sobremesa (z): R$ {precos[2]:.2f}")
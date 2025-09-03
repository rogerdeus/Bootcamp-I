import numpy as np

quant = np.array([50, 30, 20])
preco_unit = np.array([10, 20, 30])

lucro = np.dot(quant, preco_unit)

print(f"O lucro total equivale a: R${lucro}")
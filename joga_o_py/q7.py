import numpy as np

M_jan = np.array([[50, 40],
                  [30, 20]])

M_fev = np.array([[60, 35],
                  [25, 30]])

total_producao = M_jan + M_fev
print("Produção total do bimestre:")
print(total_producao)


matriz_pesos = np.zeros((2, 2))
matriz_pesos[:, 0] = total_producao[:, 0] * 2 
matriz_pesos[:, 1] = total_producao[:, 1] * 3  

print("\nMatriz de pesos (kg de matéria-prima):")
print(matriz_pesos)
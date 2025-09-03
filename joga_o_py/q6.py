import numpy as np

V = np.array([
    [100, 200, 150],
    [80, 120, 100],
    [90, 60, 110]
])

vendas_por_loja = np.sum(V, axis=1)

print("Total de vendas por loja:")
print(vendas_por_loja)

vendas_por_dia = np.sum(V, axis=0)

print("\nTotal de vendas por dia:")
print(vendas_por_dia)
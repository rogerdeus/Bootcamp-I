import numpy as np

imagem = np.random.randint(0,256, size =(3,3))

print("A imagem original é: ")
print(imagem)

transposta = imagem.T

print("A imagem rotacionada fica assim: ")
print(transposta)
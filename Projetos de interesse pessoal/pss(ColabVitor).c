#include<stdio.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  //Iremos fazer um verificador de triângulo, que caso confirmado, calcula seu perímetro

  float lado1, lado2, lado3, perimetro;

    // Entrada de dados
    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o terceiro lado: ");
    scanf("%f", &lado3);

    // Verifica se os lados formam um triângulo
    if ((lado1 + lado2 > lado3) &&
        (lado1 + lado3 > lado2) &&
        (lado2 + lado3 > lado1)) {}
  
  return 0;
}

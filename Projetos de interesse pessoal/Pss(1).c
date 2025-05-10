//Fazendo uma calculadora do teorema de pitágoras

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float b, c;

    printf("\n\nInforme o tamanho dos dois catetos de um triângulo equilátero para saber o tamanho de sua hipotenusa: ");
    scanf("%f %f", &b, &c);

    printf("\n\nO cateto b, vale: %.2f", b);
    printf("\n\nO cateto c, vale: %.2f", c);

    printf("\n\nSabendo que a fórmula do teorema de pitágoras é: a² = b² + c², é possível concluir que (a) é igual a: %.2f", sqrt(pow(b, 2) + pow(c, 2)));

    return 0;
}

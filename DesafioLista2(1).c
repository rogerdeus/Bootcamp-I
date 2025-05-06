#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    double n = 0;
    double num;
    double valor;

    while(num > 0){
    printf("\n\nDigite quantos números inteiros e positivos quiser para fazer a média(Para parar, digite um número negativo): ");
    scanf("%lf", &num);

    if(num > 0){
    n++;
    valor = valor + num;
    printf("\n\nA quantidade de termos e aa soma deles respectivamente é: %.0lf %.0lf",n, valor);
    }else if(num < 0){
    printf("\n\nA média aritmética dos termos digitados é: %.3lf ", ((valor) / (n)));
    }


    }
    return 0;
}
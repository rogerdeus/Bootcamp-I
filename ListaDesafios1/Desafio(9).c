#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float A, B, C, D;
    float media;



    printf("Escolha 4 valores positivos para a média aritimética (A, B, C e D)");
    scanf("%f %f %f %f", &A, &B, &C, &D);
    media = ((A + B + C + D) / 4);

    printf("\n\nA média aritmética é: %.2f", media);
    printf("\n\nA variância é: %.2f", sqrt(pow(((A + B + C + D) - media), 2) / 3));
    printf("\n\nO desvio padrão é: %.2f", sqrt(((pow((A - media), 2) + pow((B - media), 2) + pow((C - media), 2) + pow((D - media), 2)) / 3)));

    return 0;

}
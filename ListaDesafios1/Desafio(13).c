#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int idade;
    float altura;
    float peso;
    int sexo;

    printf("\n\nPor favor, informe a sua idade em anos: ");
    scanf("%d", &idade);

    printf("\n\nPor favor, informe a sua altura em centímetros: ");
    scanf("%f", &altura);

    printf("\n\nPor favor, informe o seu peso em quilogramas: ");
    scanf("%f", &peso);

    printf("\n\nPor favor, se você for mulher, digite 1, se for homem, digite 0 ");
    scanf("%d", &sexo);

    if(sexo == 0){
        printf("Sua Taxa Metabólica Basal é: %f", (66.7 + (13.75 * peso) + (5.003 * altura) - (6.755 * idade)));
    }else{
        if(sexo == 1){
            printf("Sua Taxa Metabólica Basal é: %f", (665.09 + (9.563 * peso) + (1.85 * altura) - (4.676 * idade)));
        }

    }

    return 0;
}
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int anoNasc;
    int diferencaDeAnos;
    int faltaAnos;

    printf("\n\nInforme seu ano de nascimento: ");
    scanf("%d", &anoNasc);

    diferencaDeAnos = 2025 - anoNasc;
    printf("\n\nSua idade em 31 de Dezembro de 2025 será: %d", diferencaDeAnos);

    faltaAnos = 50 - diferencaDeAnos;

    if(faltaAnos > 0){
    printf("\n\nVocê fará 50 anos de idade em: %d", 2025 + faltaAnos);
    }else{
        printf("\n\nVocê fez 50 anos de idade em: %d", 2025 + faltaAnos);
    }


    return 0;
}
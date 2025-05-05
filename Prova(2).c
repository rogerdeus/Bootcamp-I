#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float num;
    int contP = 0;
    int contN = 0;



    while(num != 0){

        printf("\n\nDigite um número positivo, negativo ou nulo: ");
        scanf("%f", &num);

        if(num > 0){

        contP = contP + 1;

        printf("\n\nA quantidade de números positivos é: %d", contP);
        }else{
            if(num < 0){

                contN = contN + 1;

                printf("\n\nA quantidade de números negativos é: %d", contN);
            }else{
                if(num == 0){
                    printf("\n\nO número escolhido foi zero, sendo que a quantidade de números positivos e negativos é respectivamente: %d %d", contP, contN);
                }
            }
        }


    }

    if(contP > contN){
        printf("\n\nA quantidade de números positivos é maior que a de negativos!");
    } else{
        if(contN > contP){
            printf("\n\nA quantidade de números negativos é maior que a de positivos!");
        } else{
            if(contP == contN){
                printf("\n\nA quantidade de números positivos e negativos é igual!");
            }
        }
    }

    return 0;
}
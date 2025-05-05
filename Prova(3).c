#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    double temp;
    int unidade;

    printf("\nInforme a temperatura (usando um número inteiro): ");
    scanf("%lf", &temp);
    printf("\n\nInforme se a unidade de medida da temperatuda é Celsius ou Farenheit (digite 1 para Celsius e 0 para Farenheit): ");
    scanf("%d", &unidade);
    if(unidade != 1 && unidade != 0){
        printf("A unidade usada não é válida");
    } else{
        if(unidade == 1){
            printf("A conversão da sua temperatura de Celsius para Farenheit é: %lf", (32 + (9 * temp)/(5) ));
        }else{
            if (unidade ==0){
                printf("A conversão da sua temperatura de Farenheit para Celcius é: %lf", (5 * (temp - 32) / (9)));
            }
        }
    }

    return 0;
}
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float A, B, C;

    printf("\nEscolha 3 números aleatórios (A, B e C)");
    scanf("%f %f %f", &A, &B, &C);

    if(A > B && A > C){
        printf("\n\nO maior número digitado é: %.2f ", A);
    }
    else{
        if(B > A && B > C){
            printf("\n\nO maior número digitado é: %.2f ", B);
        }
        else{
            if(C > A && C > B){
                printf("\n\nO maior número é: %.2f", C);
            }
            else{
                if(A == B && A == C){
                    printf("\n\nTodos os números escolhidos são iguais, sendo igual a: %.2f ", A);
                }
            }
        }
    }


    return 0;
}
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float A, B, C;
    
    printf("Insira 3 valores aleatórios(A, B e C): ");
    scanf("%.2f %.2f %.2f", &A, &B, &C);

    if(A > B && A > C && B > C){
        printf("A ordem crescente é: %.2f %.2f %.2f ", C, B, A);
    }
    else{
        if(A > B && A > C && C > B){
            printf("A ordem crescente é: %.2f %.2f %.2f ", B, C, A);
        }
        else{
            if(B > A && B > C && A > C){
                printf("A ordem crescente é: %.2f %.2f %.2f ", C, A, B);
            }
            else{
                if(B > A && B > C && C > A){
                    printf("A ordem crescente é: %.2f %.2f %.2f ", A, C, B);
                }
                else{
                    if(C > A && C > B && A > B){
                        printf("A ordem crescente é: %.2f %.2f %.2f ", B, A, C);
                    }
                    else{
                        if(C > A && C > B && B > A){
                            printf("A ordem crescente é: %.2f %.2f %.2f ", A, B, C);
                        }
                        else{
                            if(A > B && A > C && B == C){
                                printf("A ordem crescente é: %.2f %.2f ", B, A);
                            }
                            else{
                                if(B > A && B > C && A == C){
                                    printf("A ordem crescente é: %.2f %.2f ", A, B);
                                }
                                else{
                                    if(C >A && C > B && A == B){
                                        printf("A ordem crescente é: %.2f %.2f ", A, C);
                                    }
                                    else{
                                        if(A == B && A == C){
                                            printf("Todos os termos são iguais a: %.2f", A);
                                        }
                                        else{
                                            if(A < B && A < C && B == C){
                                                printf("A ordem crescente é: %.2f %.2f ", A, B);
                                            }
                                            else{
                                                if(B < A && B < C && A == C){
                                                    printf("A ordem crescente é: %.2f %.2f ", B, A);
                                                }
                                                else{
                                                    if(C < A && C < B && A == B){
                                                        printf("A ordem crescente é: %.2f %.2f ", C, A);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }



    return 0;
}
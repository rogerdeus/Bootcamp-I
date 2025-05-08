#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, b, a0, b0;
    int mmc = 1, mdc = 1;
    int div = 2;

    do {
        printf("Digite um numero inteiro: ");
        scanf("%d", &a);
        printf("\nDigite outro numero inteiro: ");
        scanf("%d", &b);
        if (a <= 0 || b <= 0) {
            printf("\nErro\n");
        }
    } while (a <= 0 || b <= 0);

  
    a0 = a;
    b0 = b;


    printf("\n MMC:\n");


    while (a != 1 || b != 1) {

        printf("%d %d | %d\n", a, b, div);

        if (a % div == 0 && b % div == 0) {
            a = a / div;
            b = b / div;
            mmc *= div;
            mdc *= div;
        }else if (a % div == 0) {
            a = a / div;
            mmc *= div;
        } else if (b % div == 0) {
            b = b / div;
            mmc *= div;
        } else {
            if (div == 2) {
                div = 3;
            } else {
                div += 2;
            }
        }
    }

    printf("%d %d\n", a, b);

    printf("\nO MMC de %d e %d e: %d\n", a0, b0, mmc);
    printf("O MDC de %d e %d e: %d\n", a0, b0, mdc);

    return 0;
}
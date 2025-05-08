#include <stdio.h>

int main() {
    int n, i;

    printf("Digite um número maior que 5: ");
    scanf("%d", &n);

    if (n <= 5) {
        printf("Número inválido. Deve ser maior que 5.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("x");
    }
    printf("\n");

    for (i = 0; i < n - 2; i++) {
        printf("x\n");
    }

    for (i = 0; i < n; i++) {
        printf("x");
    }
    printf("\n");

    return 0;
}
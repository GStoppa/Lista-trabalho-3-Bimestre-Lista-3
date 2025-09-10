#include <stdio.h>

int main() {
    int num;
    int soma = 0;

    printf("Digite numeros (0 para encerrar):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num < 0) {
            num = -num;
        }

        soma += num;
    }

    printf("Programa encerrado. O resultado é %d.\n", soma);

    return 0;
}

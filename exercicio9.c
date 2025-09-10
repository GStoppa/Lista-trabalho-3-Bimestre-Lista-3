#include <stdio.h>

  long  long int calcular(long long int base, long long int expoente) {
    long long  int resultado = 1;
    long  long int i;
    
    for ( i = 0; i < expoente; i++) {
        resultado *= base; 
    }
    
    return resultado;
}

int main() {
    long long int dividendo, divisor, resultado;

    printf("Digite o primeiro numero:\n");
    scanf("%lld", &dividendo);

    printf("Digite o segundo numero:\n");
    scanf("%lld", &divisor);

    resultado = calcular(dividendo, divisor);

    printf("A base e: %lld\n", dividendo);
    printf("O expoente e: %lld\n", divisor);
    printf("O resultado da potencia e: %lld\n", resultado);

    return 0;
}

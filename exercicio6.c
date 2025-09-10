#include<stdio.h>

float raizquadrada(float N){
    float Xanterior = N/ 2.0;
    float Xnovo;
    float erro;

    for (  int i = 0; i < 1000; i++){
        Xnovo = ( Xanterior / 2) + (N / (2 * Xanterior) );
            
        erro = (Xnovo - Xanterior ) / Xanterior;
        if ( erro < 0) {
            erro = -erro;
        }
        if (erro < 0.0001){
            break;
        }
        Xanterior = Xnovo;
    }
        return Xnovo;
    }

int main () {

    float N, resultado;

printf ("Digite um numero a ser calculado na raiz quadrada:\n");
scanf ("%f", &N);

if (N < 0) {
        printf("nao e possivel calcular a raiz quadrada de numero negativo.\n");
        return 1;}

resultado = raizquadrada(N);

printf ("A raiz quadrada de %2f e: %4f\n", N, resultado);

return 0;
}
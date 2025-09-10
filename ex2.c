/*

2)- Dado um número inteiro positivo binário X = x1 x2 x3 x4 de 4 dígitos (com x1, x2,
x3 e x4 valendo 0 ou 1), chamamos de divisão binária ao número Y = y1 y2 y3 y4 para
o qual: y1=0, y2=x1, y3=x2 e y4=x3.
Exemplificando, se X=1011 então Y=0101.
Dado esse mesmo número X = x1 x2 x3 x4 de 4 dígitos, chamamos de multiplicação
binária ao número Z = z1 z2 z3 z4 z5 para o qual: z1=x1, z2=x2, z3=x3, z4=x4 e z5=0.
Exemplificando, se X=1011 então Z=10110.
Faça um algoritmo que leia X e imprima Y (com 4 dígitos) e Z (com 5 dígitos).


*/


#include<stdio.h>

int x[4], y[4], z[5];

void leitura_x()
{
    
    for (int i = 0; i < 4; i++)
    {
        printf("X na posicao %d: ", i);
        scanf("%d", &x[i]);
    }
    printf("\n");
}

void trocas_y()
{
    y[0] = 0;
    y[1] = x[0];
    y[2] = x[1];
    y[3] = x[2];
    
    for (int i = 0; i < 4; i++)
    {
        printf("Valor binario de y:\t%d\n", y[i]);
    }
    
    printf("\n");
}

void trocas_z()
{

        z[0] = x[0];
        z[1] = x[1];
        z[2] = x[2];
        z[3] = x[3];
        z[4] = 0;
        

        for (int i = 0; i < 5; i++)
    {
        printf("Valor binario de z:\t%d\n", z[i]);
    }
}

int main()
{
    leitura_x();
    trocas_y();
    trocas_z();
}

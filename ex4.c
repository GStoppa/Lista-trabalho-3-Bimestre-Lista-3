/*
4)- Uma cooperativa de leite paga, a cada um de seus produtores cooperados, por
volume de leite entregue diariamente. Devido à grande quantidade de fraudes
(adicionamento de água ao leite, por exemplo) e erros na leitura do volume dos tarros
de leite, a cooperativa começará a pagá-los por massa. Para isso comprou uma
balança e um densímetro e necessitará de um algoritmo para cálculo. Na balança
serão jogados e misturados os conteúdos de todos os tarros de leite de um
determinado produtor. A balança informará a massa e o densímetro a densidade. O
algoritmo receberá, via teclado, esses dois dados mais o preço por kg de leite vigente
naquele dia. Após isto, o algoritmo deverá apresentar em tela:
a)Os valores digitados;
b)O volume de leite calculado (volume = massa / densidade);
c)O valor em Reais a ser pago a aquele cooperado;
d)Classificar o leite do cooperado dentro de uma das 3 faixas de densidade
existentes:
• Categoria I (abaixo de 1,14 kg/l);
• Categoria II (entre 1,14 e 1,20 kg/l);
• Categoria III (acima de 1,20 kg/l).

*/

#include<stdio.h>

float m, d, ple;

void leitura()
{
    printf("Digite a massa:\t");
    scanf("%f", &m);
    printf("Digite a densidade:\t");
    scanf("%f", &d);
    printf("Digite o preco por kg de leite:\t");
    scanf("%f", &ple);
}

void contas()
{
    float v = m/d;
    float pto = m * ple;
    printf("\nVolume: %.2f\n Preco total a pagar: %.2f\n", v, pto);
}

void classificacao()
{
    if (d < 1.14) {
        printf("Classificacao: Categoria I (abaixo de 1,14)\n");
    } 
    else if (d >= 1.14 && d <= 1.20) {
        printf("Classificacao: Categoria II (entre 1,14 e 1,20)\n");
    } 
    else {
        printf("Classificacao: Categoria III (acima de 1,20)\n");
    }
}

void tela()
{
    printf("\n\nValores digitados:\n Massa: %.2f\n Densidade: %.3f\n Preco do leite por kg: %.2f\n", m, d, ple);
    contas();
    classificacao();

}

int main()
{
    leitura();
    tela();
}
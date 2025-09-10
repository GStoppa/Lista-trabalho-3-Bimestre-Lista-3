#include <stdio.h>
#include <math.h>

void potencia(){ 
	float p, r=0;
	printf("Digite um numero:\n");
	scanf("%f", &p);
	
	if(p >= 0){
	r = pow(p, 5);
	printf ("Potencia de 5 do numero %.2f = %.2f\n", p, r);
}}

void raiz(){
	float r, x;
	x=0;
	printf("Digite um numero:\n");
	scanf("%f", &r);
	
	if(r >= 0){
		x = r * r;
		printf("A raiz quadrada de %.2f e = %.2f\n", r, x);
	}
	
	else { printf("Este numero nao possui raiz quadrada.\n"); }
		
}

void modulo(){
	float m;
	printf("Digite um numero:\n");
	scanf ("%f", &m);
	
	if ( m < 0){
	  m = m * -1;
	  printf("O modulo deste numero é: %.2f\n", m);
	}
	   else { printf("O modulo deste numero e: %.2f\n", m);
	}
}

int main() {
	
int escolha= 0;
	
while(escolha != 4){
	
	printf("CALCULADORA\n");
	printf("\n");
	printf("Escolha uma opcao:\n");
	printf("1- Potencia de 5\n");
	printf("2- Raiz quadrada\n");
	printf("3- Modulo\n");
	printf("4- Sair do programa ");
	printf("\n");
	
	scanf("%i", &escolha);
	
	switch (escolha){
		
		case 1: potencia(); break;
		case 2: raiz(); break;
		case 3: modulo(); break;
		case 4: printf("Fechando programa...\n"); break;
		default: printf("Numero invalido, tente novamente.\n");
	}
}
	

	return 0;
}

#include <stdio.h>
#include <ctype.h>

char X[9], Y[9];
int i;

void leitura(){

printf ("Digite uma data:\n");
fgets(X, 9, stdin);
fflush(stdin);
}

int confere(char X[9]){
	for (i=0; i<8; i++){
		if (!isdigit(X[i])){
			return 0;
		}
	}
	
	return 1;
}

void troca(char X[9]){
	
	Y[0] = X[2];
	Y[1] = X[3];
	Y[2] = X[0];
	Y[3] = X[1];
	
for (i=0; i< 4; i++){
	Y[i +4] = X[i + 4];
}
Y[8] = '\0';
}

void exibicao(char Y[9]){
	printf ("Data: %s\n", Y);
		
}



int main() {
	
	leitura();
	
	  if (!confere(X)) {
	  	printf("Erro: Entrada invalida, so e aceito numeros.\n");
	  	return 1;
	  }
	troca(X);
	exibicao(Y);
	
	return 0;
}

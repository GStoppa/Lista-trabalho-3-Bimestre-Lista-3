#include <stdio.h>

void primos(int NP) {
	
	int i, j, cont, p = 0;
	cont = 0;
	
	for (i = 2; i <= NP; i++) {  
	
		cont = 0;
 
        for (j = 2; j < i; j++) {

            if (i % j == 0) {
            	
                cont++;
	
            }
            
        }
        
        if (cont == 0) {

            p++;
            
        }
        
    }

    printf("Ha %d numeros primos ate %d\n", p, NP);
    
}


int main () {
	
	int n;
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	if (n < 2){
		
		printf("Numero invalido!\nTente novamente: ");
		scanf("%d", &n);
		
	}	
	
	primos(n);
		
	return 0;
}

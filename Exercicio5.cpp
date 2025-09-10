#include <stdio.h>

void A () {
	
	int j;
	double A = 0;
	
	for (j = 1; j < 51; j++) {
		
		A += 1.0 / j;
		
	}
	
	printf("O valor da serie A eh: %.5f\n", A);
	
}

void B (double X) {
	
	int i;
	double B = 0;
	
	for (i = 1; i <= 20; i++) {
		
		if (i % 2 == 0) {
			
			B -= X / i;
			
		}
		
		else {
			
			B += X / i;
			
		}
		
	}
	
	printf("Resultado da serie B: %.5f", B);
	
}

int main () {
	
	printf("Serie A:");
	
	A();
	
	double x;
	printf("Digite o numero para a serie B:\n");
	scanf("%lf", &x);
	
	B(x);
	
	return 0;
}

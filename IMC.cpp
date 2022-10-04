#include <stdio.h>

int main(){
	float imc, peso, altura;
	
	printf ("insira seu peso: ");
	scanf ("%f", &peso);
	printf ("insira sua altura em cm: ");
	scanf ("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("seu imc eh %f", imc);
	
	
	
	
	
	return 0;
	
}
	
	

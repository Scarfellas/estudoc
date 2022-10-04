#include <stdio.h>

int main(){

  float metros, centimetros, milimetros;

  printf("insira o valor em metros ? ");
  scanf("%f", &metros);
  	
  	if (metros <= 0){
  		printf ("insira um valor maior que 0: ");
  		scanf ("%f", &metros);
	  }
 
	centimetros = metros * 100;
  	milimetros = metros *1000;

  	printf("valor em centimetros: %.2f \n", centimetros);
	printf("valor em milimetros: %.2f \n", milimetros);
	
  return 0;
}
		


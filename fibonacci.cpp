#include <stdio.h>

//função adicionada alem do main
int calculo_de_fibonnaci(int posicao){
	
	if (posicao <= 0){
		return 0;
	}
	
	else{
	
		
		if (posicao == 1){
			return 1;
		}
			
		else{
			if(posicao == 2){
				return 1;
			}
			else{
				return (calculo_de_fibonnaci (posicao-1) + calculo_de_fibonnaci(posicao-2));
			}
		}
	}
	
	

}

int main(){
	
	int posicao, resultado;
	
	printf ("insira posicao: ");
	scanf ("%d", &posicao);
	
	
	resultado = calculo_de_fibonnaci (posicao);
	
	printf  ("O valor da posicao eh: %d", resultado);
	
	
	return 0;
	
}

#include <stdio.h>

int main(){
	float n1, n2, nf, media;
	
	printf("Primeira nota: ");
	scanf("%f", &n1);
	printf("Segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1+n2)/2;
	
	if (media >= 4 && media <=7){
		printf ("nota final: ");	
		scanf ("%f" ,&nf);
		
		media = (media + nf)/2;
	}
	
	printf ("Media = %f\n" ,media);
	
	return 0;
}

#include <stdio.h>
#include <ctype.h>

int main(){
	float altura, peso, geb;
	char genero;
	int idade;
	
	printf("Informe o peso(kg):");
	scanf(" %f", &peso);

	printf("Informe o altura(m):");
	scanf(" %f", &altura);

	printf("Informe o idade:");
	scanf(" %d", &idade);

	printf("Informe o genero(M/F):");
	scanf(" %c", &genero);

	if(toupper(genero)=='M') geb = 66.47+(13.75*peso)+(5*altura)-(6.76*idade);
	if(toupper(genero)=='F') geb = 655.1+(9.56*peso)+(1.85*altura)-(4.67*idade);
	printf("GEB: %.2f Kcal\n", geb);
	
	return 0;
}

#include <stdio.h>

int main(){
	float imc, peso, altura;

	printf("Informe o peso(kg):");
	scanf("%f", &peso);

	printf("Informe o altura(m):");
	scanf("%f", &altura);

	imc = peso/(altura*altura);
	if(imc<20) printf("Abaixo do peso\n");
	if(imc>20 && imc<=25) printf("Peso normal\n");
	if(imc>25 && imc<=30) printf("Acima do peso\n");
	if(imc>30 && imc<=34) printf("Obeso\n");
	if(imc>34) printf("Muito obeso\n");
	return 0;
}

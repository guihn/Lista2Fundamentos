#include <stdio.h>

int main(){
	float num, den;
	printf("Informe o numerador:");
	scanf("%f", &num);

	printf("Informe o denominador:");
	scanf("%f", &den);

	if(den==0){
		printf("Erro: divisao por zero\n");
		return 0;
	}
	printf("%.1f/%.0f=%.1f\n",num,den,(num/den));
	
	return 0;
}

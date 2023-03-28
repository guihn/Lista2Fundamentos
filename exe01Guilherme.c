#include <stdio.h>

int main(){
	int idade;
	printf("Informe a idade:");
	scanf("%d", &idade);
	if(idade<0){
		printf("OPCAO INVALIDA!\n");
		return -1;
	}
	if(idade<=4) printf("AINDA EH CEDO PARA JOGAR FUTEBOL!!!\n");
	if(idade>=5 && idade<=10) printf("Sub-10\n");
	if(idade>=11 && idade<=17) printf("Sub-17\n");
	if(idade>=18 && idade<=20) printf("Sub-20\n");
	if(idade>=21 && idade<=35) printf("Profissional\n");
	if(idade>=36 && idade<=55) printf("Master\n");
	if(idade>=56) printf("MELHOR APOSENTAR AS CHUTEIRAS...\n");
	return 0;
}

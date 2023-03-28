#include <stdio.h>

int main(){
	int a,b;
	printf("Informe o primeiro numero:");
	scanf("%d",&a);

	printf("Informe o segundo numero:");
	scanf("%d",&b);
	if(a!=b) printf("O numero maior eh: %d\n",(a>b)?a:b);
	if(a==b) printf("Os numeros sao iguais\n");
	return 0;	
}

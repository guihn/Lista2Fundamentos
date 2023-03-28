#include <stdio.h>

int main(){
	int a,b,c;
	printf("Informe o primeiro numero:");
	scanf("%d",&a);

	printf("Informe o segundo numero:");
	scanf("%d",&b);

	printf("Informe o terceiro numero:");
	scanf("%d",&c);
	
	printf("O numero do meio eh: %d\n",(a>b && b>c)?b:(b>a && a>c)?a:(c>b && b>a)?b:(b>c && c>a)?c:(a>c && c>b)?c:(c>a && a>b)?a:-1);
	return 0;	
}

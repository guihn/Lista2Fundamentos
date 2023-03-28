#include <stdio.h>

int main(){
	int a,b,c;
	printf("Informe o primeiro numero:");
	scanf("%d",&a);

	printf("Informe o segundo numero:");
	scanf("%d",&b);

	printf("Informe o terceiro numero:");
	scanf("%d",&c);
	
	printf("Soma: %d\n",(a+b+c));
	printf("Media: %d\n",(a+b+c)/3);
	printf("Produto: %d\n",(a*b*c));
	printf("Menor: %d\n",(a<b && b<c)?a:(b<a && a<c)?b:(b<c && c<a)?b:(c<b && b<a)?c:(a<c && c<b)?a:(c<a && a<b)?c:-1);
	printf("Maior: %d\n",(a>b && b>c)?a:(b>a && a>c)?b:(b>c && c>a)?b:(c>b && b>a)?c:(a>c && c>b)?a:(c>a && a>b)?c:-1);
	return 0;	
}

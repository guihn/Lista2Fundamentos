#include <stdio.h>
//não funciona 
int main(){
	int dia, mes;

	printf("Informe o dia:");
	scanf("%d", &dia);

	printf("Informe o mes:");
	scanf("%d", &mes);

	if(dia>=22 && dia<=20 && mes>12 &&mes<=1) printf("Signo: Capricornio\n");
	if(dia>=21 && dia<=19 && mes>1 &&mes<=2) printf("Signo: Aquario\n");
	if(dia>=20 && dia<=20 && mes>2 &&mes<=3) printf("Signo: Peixes\n");
	if(dia>=21 && dia<=20 && mes>3 &&mes<=4) printf("Signo: Aries\n");
	if(dia>=21 && dia<=20 && mes>4 &&mes<=5) printf("Signo: Touro\n");
	if(dia>=21 && dia<=20 && mes>5 &&mes<=6) printf("Signo: Gemeos\n");
	if(dia>=21 && dia<=21 && mes>6 &&mes<=7) printf("Signo: Cancer\n");
	if(dia>=22 && dia<=22 && mes>7 &&mes<=8) printf("Signo: Leao\n");
	if(dia>=23 && dia<=22 && mes>8 &&mes<=9) printf("Signo: Virgem\n");
	if(dia>=23 && dia<=21 && mes>9 &&mes<=10) printf("Signo: Libra\n");
	if(dia>=23 && dia<=21 && mes>10 &&mes<=11) printf("Signo: Escorpiao\n");
	if(dia>=21 && dia<=22 && mes>11 &&mes<=12) printf("Signo: Sagitario\n");
	
	
	return 0;
}

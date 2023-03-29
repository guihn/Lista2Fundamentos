#include <stdio.h>

int main() {
  int dia, mes;
  char *signo;

  printf("Digite o dia de nascimento: ");
  scanf("%d", &dia);
  printf("Digite o mês de nascimento (em numero): ");
  scanf("%d", &mes);

  if ((mes == 1 && dia >= 22) || (mes == 2 && dia <= 19)) signo = "Aquario";
  else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20)) signo = "Peixes";
  else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20)) signo = "Aries";
  else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20)) signo = "Touro";
  else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) signo = "Gemeos";
  else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 21)) signo = "Cancer";
  else if ((mes == 7 && dia >= 22) || (mes == 8 && dia <= 22)) signo = "Leao";
  else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) signo = "Virgem";
  else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) signo = "Libra";
  else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) signo = "Escorpiao";
  else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) signo = "Sagitario";
  else signo = "Capricórnio";

  printf("Signo: %s\n", signo);

  return 0;
}

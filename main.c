#include <stdio.h>

int main(void) {
float num,num0,soma,subtracao,multi, div;
  int esco;
   printf("Calculadora \n");
     printf("Coloque um numero: \n");
     scanf("%f", &num);
  printf("Coloque um numero: \n");
     scanf("%f", &num0);
    printf("Aperte 1 para soma\n");
  printf("Aperte 2 para subtraçao\n");
  printf("Aperte 3 para multiplicacão\n");
  printf("Aperte 4 para divisão\n");
  printf("Digite o número de escolha:\n");
  scanf("%d", &esco);
  getchar();

  
  system("clear");
   if (esco == 1) {
  soma = num + num0;
  printf("O resultado da soma e %.2f\n", soma);
   }
if (esco == 2) {
  subtracao = num - num0;
  printf("O resultado da sub e %.2f\n", subtracao);
}
if (esco == 3){
multi = num * num0;
printf("O resultado da multiplicacao e %.2f\n", multi);
}
if (esco== 4){
div = num / num0;
printf("O resultado da divisão e %.2f\n", div);
}
  return 0;
  } 
  
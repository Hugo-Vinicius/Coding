#include <stdio.h>

int main(void) {

  char titulo[500], artista[500], genero[500];
  int esc, ano, duracao;

  /*introdução*/

  printf("Esse é um sistema de gerenciamneto de músicas que tem o objetivo "
         "\nde lhe auxiliar na organização de suas músicas\nAperte ENTER para "
         "começar\n\n\n");
  getchar();

  printf("Aperte 1 para cadastrar uma nova música\nAperte 2 para visualizar as "
         "informações cadastradas\nAperte 3 para atualizar informações sobre "
         "uma música\nAperte 4 para remover uma música\n")

      /*escaneamento de informações*/

      printf("Informe o título da música\n");
  scanf("%s", &titulo);

  printf("\nInforme o artista que canta a música\n");
  scanf("%s", &artista);

  printf("\nInforme o gênero da música\n");
  scanf("%s", &genero);

  printf("\nInforme o ano em que a música foi feita\n");
  scanf("%d", &ano);

  printf("\nInforme a duração da música\n");
  scanf("%d", &duracao);

  /*exibindo informações*/

  printf("O título é %s\nO artista é %s\nO gênero é %s\nEla é do ano de "
         "%d\nEla dura %d",
         titulo, artista, genero, ano, duracao);
  return 0;
}

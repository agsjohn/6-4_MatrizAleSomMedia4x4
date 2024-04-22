#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 4
#define ALE 101

main() {
  int l, c, m[TAM][TAM], soma = 0, media;
  srand(time(NULL));
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      m[l][c] = rand() % ALE;
      soma = soma + m[l][c];
    }
  }
  printf("Matriz: \n");
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      if(c < TAM - 1){
        printf("%i - ", m[l][c]);
      }
      else{
        printf("%i\n", m[l][c]);
      }
    }
  }
  media = (soma / (TAM * TAM));
  printf("\nSoma: %i \nMedia: %i", soma, media);
  getchar();
}
#include <stdio.h>

int main(void) {
int numeros[5];
  // Insercao dos valores no vetor
  printf("Digite 5 valores: \n");
  for(int i = 0; i<5 ; i++){
    scanf("%d",&numeros[i]);
  }
  // Impressao da posicao 3
    printf("A terceira posicao do vetor é: %d\n",numeros[2]);
  return 0;
}
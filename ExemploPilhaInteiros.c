#include "Fila.h"
#include "Pilha.h"
#include "Utils.h"
#include <stdio.h>

int main() {

  printf("\n\n -- Pilha original -- \n\n");
  pDPilha pPilhaInt = criarPilha();

  /* teste de empilhamento */
  empilharInfo(pPilhaInt, alocaInt(5));
  empilharInfo(pPilhaInt, alocaInt(3));
  empilharInfo(pPilhaInt, alocaInt(9));
  empilharInfo(pPilhaInt, alocaInt(1));
  empilharInfo(pPilhaInt, alocaInt(2));

  /* teste de desempilhamento */
  void *info = desempilharInfo(pPilhaInt);
  printf("\nDesempilhou o inteiro = %d \n", *((int *)info));

  while (pilhaVazia(pPilhaInt) == 0) {
    info = desempilharInfo(pPilhaInt);
    printf("\nDesempilhou o inteiro = %d \n", *((int *)info));
  }

  printf("\n\n ---------------------------------------- \n\n");
  printf("\n\n -- Fila original -- \n\n");

  pDFila pFilaInt = criarFila();

  /* teste de enfileiramento */
  enfileirarInfo(pFilaInt, alocaInt(5));
  enfileirarInfo(pFilaInt, alocaInt(3));
  enfileirarInfo(pFilaInt, alocaInt(9));
  enfileirarInfo(pFilaInt, alocaInt(1));
  enfileirarInfo(pFilaInt, alocaInt(2));

  /* teste de desenfileiramento */
  void *infoFila = desenfileirarInfo(pFilaInt);
  printf("\nRetirou o inteiro = %d \n", *((int *)info));

  while (filaVazia(pFilaInt) == 0) {
    info = desenfileirarInfo(pFilaInt);
    printf("\nRetirou o inteiro = %d \n", *((int *)info));
  }

  printf("\n\n ---------------------------------------- \n\n");
  printf("\n\n -- Exercício 1 -- \n\n");

  pDPilha pPilhaInt1 = criarPilha();
  /* teste de empilhamento */
  empilharInfo(pPilhaInt1, alocaInt(1));
  empilharInfo(pPilhaInt1, alocaInt(2));
  empilharInfo(pPilhaInt1, alocaInt(3));
  empilharInfo(pPilhaInt1, alocaInt(2));
  empilharInfo(pPilhaInt1, alocaInt(1));

  pilhaPalindromo(pPilhaInt1, alocaInfoInt, comparaInt);

  printf("\n\n ---------------------------------------- \n\n");
  printf("\n\n -- Exercício 2 -- \n\n");

  pDFila pFilaInt2 = criarFila();
  /* teste de empilhamento */
  enfileirarInfo(pFilaInt2, alocaInt(5));
  enfileirarInfo(pFilaInt2, alocaInt(3));
  enfileirarInfo(pFilaInt2, alocaInt(9));
  enfileirarInfo(pFilaInt2, alocaInt(1));
  enfileirarInfo(pFilaInt2, alocaInt(2));

  inverterFila(pFilaInt2);

  printf("\nFila invertida: \n");

  while (filaVazia(pFilaInt2) == 0) {
    info = desenfileirarInfo(pFilaInt2);
    printf("\nRetirou o inteiro = %d \n", *((int *)info));
  }

  printf("\n\n ---------------------------------------- \n\n");
  printf("\n\n -- Exercício 3 -- \n\n");

  pDPilha pPilhaInt3_1 = criarPilha();
  /* teste de empilhamento */
  empilharInfo(pPilhaInt3_1, alocaInt(1));
  empilharInfo(pPilhaInt3_1, alocaInt(2));
  empilharInfo(pPilhaInt3_1, alocaInt(3));
  empilharInfo(pPilhaInt3_1, alocaInt(2));
  empilharInfo(pPilhaInt3_1, alocaInt(1));

  pDPilha pPilhaInt3_2 = criarPilha();
  /* teste de empilhamento */
  empilharInfo(pPilhaInt3_2, alocaInt(1));
  empilharInfo(pPilhaInt3_2, alocaInt(2));
  empilharInfo(pPilhaInt3_2, alocaInt(3));
  empilharInfo(pPilhaInt3_2, alocaInt(3));
  empilharInfo(pPilhaInt3_2, alocaInt(1));

  compararPilhas(pPilhaInt3_1, pPilhaInt3_2, comparaInt);

  printf("\n\n ---------------------------------------- \n\n");
  printf("\n\n -- Exercício 4 -- \n\n");

  pDPilha pPilhaInt4 = criarPilha();
  /* teste de empilhamento */
  empilharInfo(pPilhaInt4, alocaInt(1));
  empilharInfo(pPilhaInt4, alocaInt(2));
  empilharInfo(pPilhaInt4, alocaInt(3));
  empilharInfo(pPilhaInt4, alocaInt(3));
  empilharInfo(pPilhaInt4, alocaInt(1));

  pDPilha pPilhaNova4 = copiarPilha(pPilhaInt4, alocaInfoInt);

  printf("\nPilha copiada: \n");
  while (pilhaVazia(pPilhaNova4) == 0) {
    info = desempilharInfo(pPilhaNova4);
    printf("\nDesempilhou o inteiro = %d \n", *((int *)info));
  }

  printf("\n\n ---------------------------------------- \n\n");
  printf("\n\n -- Exercício 6 -- \n\n");

  pDPilha pPilhaInt6 = criarPilha();
  /* teste de empilhamento */
  empilharInfo(pPilhaInt6, alocaInt(1));
  empilharInfo(pPilhaInt6, alocaInt(2));
  empilharInfo(pPilhaInt6, alocaInt(3));
  empilharInfo(pPilhaInt6, alocaInt(4));
  empilharInfo(pPilhaInt6, alocaInt(5));

  removerElemento(pPilhaInt6, alocaInt(3), comparaInt);

  printf("\nPilha com elemento '3' removido: \n");

  while (pilhaVazia(pPilhaInt6) == 0) {
    info = desempilharInfo(pPilhaInt6);
    printf("\nDesempilhou o inteiro = %d \n", *((int *)info));
  }

  printf("\n\n ---------------------------------------- \n\n");
  printf("\n\n -- Exercício 7 -- \n\n");

  pDPilha pPilhaInt7 = criarPilha();
  /* teste de empilhamento */
  empilharInfo(pPilhaInt7, alocaInt(1));
  empilharInfo(pPilhaInt7, alocaInt(2));
  empilharInfo(pPilhaInt7, alocaInt(3));
  empilharInfo(pPilhaInt7, alocaInt(4));
  empilharInfo(pPilhaInt7, alocaInt(5));

  pDPilha pPilhaNova7 = pilhaFila(pPilhaInt7);

  printf("\n Fila: \n");

  while (pilhaVazia(pPilhaNova7) == 0) {
    info = desempilharInfo(pPilhaNova7);
    printf("\nDesempilhou o inteiro = %d \n", *((int *)info));
  }
}

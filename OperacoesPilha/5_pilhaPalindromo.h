#ifndef PILHA_PALINDROMO_H
#define PILHA_PALINDROMO_H

int pilhaPalindromo(pDPilha pdPilha, FuncaoAlocacao fa, FuncaoComparacao pfc) {

  pDPilha copia = criarPilha();
  copia->pdLista = duplicarLista(pdPilha->pdLista, fa);

  void *info = NULL;

  void *info1 = NULL;
  void *info2 = NULL;

  int cont = 0;

  pDPilha pPilhaInt = criarPilha();

  while (pilhaVazia(copia) == 0) {
    info = desempilharInfo(copia);
    empilharInfo(pPilhaInt, info);
  }

  int tamanhoPilha = pdPilha->pdLista->quantidade;

  while (pilhaVazia(pPilhaInt) == 0 || pilhaVazia(pdPilha) == 0) {
    info1 = desempilharInfo(pPilhaInt);
    info2 = desempilharInfo(pdPilha);

    if (pfc(info1, info2) == 0) {
      cont++;
    }
  }

  if (tamanhoPilha == cont) {
    printf("\nÉ um palindromo!\n");
    return 1;
  } else {
    printf("\nNão é um palindromo!\n");
    return 0;
  }
}

#endif
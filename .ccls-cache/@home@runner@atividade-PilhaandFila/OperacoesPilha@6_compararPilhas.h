#ifndef COMPARAR_PILHA_H
#define COMPARAR_PILHA_H

int compararPilhas(pDPilha pdPilha1, pDPilha pdPilha2, FuncaoComparacao pfc) {

  void *info = NULL;

  void *info1 = NULL;
  void *info2 = NULL;

  int cont = 0;

  int tamanhoPilha1 = pdPilha1->pdLista->quantidade;
  int tamanhoPilha2 = pdPilha2->pdLista->quantidade;

  while (pilhaVazia(pdPilha1) == 0 || pilhaVazia(pdPilha2) == 0) {
    info1 = desempilharInfo(pdPilha1);
    info2 = desempilharInfo(pdPilha2);

    if (pfc(info1, info2) == 0) {
      cont++;
    }
  }

  if (tamanhoPilha1 == cont && tamanhoPilha2 == cont) {
    printf("\nSão pilhas iguais!\n");
    return 1;
  } else {
    printf("\nNão são pilhas iguais!\n");
    return 0;
  }
}

#endif

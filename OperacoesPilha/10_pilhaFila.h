 #ifndef PILHA_FILA_H
#define PILHA_FILA_H

pDPilha pilhaFila(pDPilha pdPilha) {

  pDPilha copia = criarPilha();
  void *info = NULL;

  while (pilhaVazia(pdPilha) == 0) {
    info = desempilharInfo(pdPilha);
    empilharInfo(copia, info);
  }

  return copia;
}

#endif

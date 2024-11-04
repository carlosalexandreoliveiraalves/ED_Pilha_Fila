#ifndef REMOVER_ELEMENTO_PILHA_H
#define REMOVER_ELEMENTO_PILHA_H

void removerElemento(pDPilha pdPilha1, void *info, FuncaoComparacao pfc) {

  pDPilha pilhaRestante = criarPilha();

  void *info1 = NULL;

  while (pilhaVazia(pdPilha1) == 0) {
    info1 = desempilharInfo(pdPilha1);

    if (pfc(info, info1) != 0) {
      empilharInfo(pilhaRestante, info1);
    }
  }

  while (pilhaVazia(pilhaRestante) == 0) {
    info1 = desempilharInfo(pilhaRestante);
    empilharInfo(pdPilha1, info1);
  }
}

#endif
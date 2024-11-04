#ifndef INVERTER_FILA_H
#define INVERTER_FILA_H


void inverterFila(pDFila pdFila) {

  pDPilha copia = criarPilha();

  void *info = NULL;

  while (filaVazia(pdFila) == 0) {
    info = desenfileirarInfo(pdFila);
    empilharInfo(copia, info);
  }

  while (pilhaVazia(copia) == 0) {
    info = desempilharInfo(copia);
    empilharInfo(pdFila, info);
  }
}
#endif

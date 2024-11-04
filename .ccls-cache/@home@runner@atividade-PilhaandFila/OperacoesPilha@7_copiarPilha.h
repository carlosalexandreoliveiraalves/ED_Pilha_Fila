#ifndef COPIAR_PILHA_H
#define COPIAR_PILHA_H

pDPilha copiarPilha(pDPilha pilha, FuncaoAlocacao fa) {

  pDPilha copia = criarPilha();
  copia->pdLista = duplicarLista(pilha->pdLista, fa);
  return copia;
  
}

#endif
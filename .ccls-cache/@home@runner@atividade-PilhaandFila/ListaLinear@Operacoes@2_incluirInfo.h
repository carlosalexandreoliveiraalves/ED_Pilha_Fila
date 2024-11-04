#ifndef INCLUIR_INFO_H
#define INCLUIR_INFO_H

void incluirInfo(pDLista pd, void *info) {

  if (pd == NULL) {
    printf("Lista nao existe ainda, nao eh possivel incluir!");
    return;
  }
  /* aloca memoria para guardar a nova info */
  pNoh pNovo = malloc(sizeof(Noh));

  /* guarda a informa�o no campo "info" do novo noh alocado */
  pNovo->info = info;
  /* como a nova info ficar na �ltima posicao da lista,
     n�o ter� pr�ximo */
  pNovo->prox = NULL;

  /* salva a referencia ao ultimo noh da lista antes de atualizar o descritor */
  pNoh auxUltimo = pd->ultimo;
  /* o novo noh ser� identificado como �ltimo da lista pelo descritor */
  pd->ultimo = pNovo;
  /* a lista tem mais um noh */
  pd->quantidade++;

  /* Se o novo noh � o �nico da lista, o descritor
     precisa atualizar tamb�m o ponteiro para o primeiro noh da lista */
  if (pd->primeiro == NULL)
    pd->primeiro = pNovo;
  else {
    /* se n�o for o �nico da lista, coloc�-o no final da lista */
    auxUltimo->prox = pNovo;
  }
}

#endif

#include <stdio.h>
#include "Utils.h"
#include "Fila.h"

int main(){
    pDFila pFilaInt = criarFila();

    /* teste de enfileiramento */
    enfileirarInfo(pFilaInt, alocaInt(5));
    enfileirarInfo(pFilaInt, alocaInt(3));
    enfileirarInfo(pFilaInt, alocaInt(9));
    enfileirarInfo(pFilaInt, alocaInt(1));
    enfileirarInfo(pFilaInt, alocaInt(2));

    /* teste de desenfileiramento */
    void *info = desenfileirarInfo(pFilaInt);
    printf("\nRetirou o inteiro = %d \n", *((int*)info));

    while (filaVazia(pFilaInt)==0){
        info = desenfileirarInfo(pFilaInt);
        printf("\nRetirou o inteiro = %d \n", *((int*)info));
    }
}

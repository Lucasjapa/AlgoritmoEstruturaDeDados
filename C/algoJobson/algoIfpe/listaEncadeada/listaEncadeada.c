#include <stdio.h>

struct item{
    int conteudo;
    struct item *prox;
};

int main(){
    struct item *lista;
    struct item oito;
    struct item sete;
    struct item seis;
    struct item cinco;
    struct item tres;
    struct item um;
    struct item nove;
    struct item dez;
    struct item menos_um;
    struct item menos_quatro;

    oito.conteudo = 8;
    oito.prox = &sete;
    sete.conteudo = 7;
    sete.prox = &seis;
    seis.conteudo = 6;
    seis.prox = &cinco;
    cinco.conteudo = 5;
    cinco.prox = &tres;
    tres.conteudo = 3;
    tres.prox = &um;
    um.conteudo = 1;
    um.prox = &nove;
    nove.conteudo = 9;
    nove.prox = &dez;
    dez.conteudo = 10;
    dez.prox = &menos_um;
    menos_um.conteudo = -1;
    menos_um.prox = &menos_quatro;
    menos_quatro.conteudo = -4;
    menos_quatro.prox = NULL;

    lista = &oito;

    while (lista != NULL){
        printf("%d, ", lista->conteudo);
        lista = lista->prox;
    }
    printf("\b\b\n");

    return 0;
}
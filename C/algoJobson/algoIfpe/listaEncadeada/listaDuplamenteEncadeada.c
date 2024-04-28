#include <stdio.h>

struct item
{
    int conteudo;
    struct item *prox;
    struct item *ante;
};

int main()
{
    // Definindo um ponteiro que guarda um endereço de memória do tipo struct item
    // que aponta pra o primeiro objeto do tipo struct item dessa lista
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
    oito.ante = NULL;
    sete.conteudo = 7;
    sete.prox = &seis;
    sete.ante = &oito;
    seis.conteudo = 6;
    seis.prox = &cinco;
    seis.ante = &sete;
    cinco.conteudo = 5;
    cinco.prox = &tres;
    cinco.ante = &seis;
    tres.conteudo = 3;
    tres.prox = &um;
    tres.ante = &cinco;
    um.conteudo = 1;
    um.prox = &nove;
    um.ante = &tres;
    nove.conteudo = 9;
    nove.prox = &dez;
    nove.ante = &um;
    dez.conteudo = 10;
    dez.prox = &menos_um;
    dez.ante = &nove;
    menos_um.conteudo = -1;
    menos_um.prox = &menos_quatro;
    menos_um.ante = &dez;
    menos_quatro.conteudo = -4;
    menos_quatro.prox = NULL;
    menos_quatro.ante = &menos_um;

    lista = &oito;

    while (lista != NULL)
    {
        printf("%d, ", lista->conteudo);
        lista = lista->prox;
    }

    lista = &menos_um;

    while (lista != NULL)
    {
        printf("%d, ", lista->conteudo);
        lista = lista->ante;
    }

    printf("\b\b\n");

    return 0;
}
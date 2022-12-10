/* Fazer um programa em C que implemente o algoritmo 1.1 para acessar
elementos de vetores via ponteiros.
Crie uma função:
imprime_array_elemento(int *aArray, int iElemento); */

#include <stdio.h>

#define TAMANHO 5

int main()
{

    int valores[TAMANHO], elemento, i;

    for (i = 0; i < TAMANHO; i++)
    {
        printf("valor[%d]: ", i);
        scanf("%d", &valores[i]);
    }

    printf("Informe a posicao desejada: ");
    scanf("%d", &elemento);

    imprime_array_elemento(valores, elemento);
}

imprime_array_elemento(int *aArray, int iElemento)
{

    printf("O valor na posicao %d e: %d", iElemento, *(aArray + iElemento));
}
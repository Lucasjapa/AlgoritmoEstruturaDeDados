/* Fazer um programa em C que implemente o algoritmo 1. para acessar
elementos de uma matriz via ponteiros. Considerando uma matriz de
2x2 :
Crie uma função:
imprime_matriz_elemento_estatica(int paMatriz[][2],
int piLinha,
int piColuna);
Após entender o capítulo , crie uma função:
imprime_matriz_elemento_dinamica(int ** paMatriz,
int piLinha,
int piColuna); */

#include <stdio.h>

#define DIMENSAO 2

int main()
{

    int valores[DIMENSAO][DIMENSAO], linha, coluna, i, j;

    for (i = 0; i < DIMENSAO; i++)
    {
        for (j = 0; j < DIMENSAO; j++)
        {
            printf("valor[%d][%d]: ", i, j);
            scanf("%d", &valores[i][j]);
        }
    }

    printf("Informe a linha: ");
    scanf("%d", &linha);

    printf("Informe a coluna: ");
    scanf("%d", &coluna);

    imprime_matriz_elemento_estatica(valores, linha, coluna);
    imprime_matriz_elemento_estatica1(valores, linha, coluna);
}

imprime_matriz_elemento_estatica(int paMatriz[][2],
                                 int piLinha,
                                 int piColuna)
{

    printf("O valor na posicao[%d][%d] e: %d\n", piLinha, piColuna,
           (paMatriz[piLinha][piColuna]));
}

imprime_matriz_elemento_estatica1(int *paMatriz,
                                  int piLinha,
                                  int piColuna)
{

    printf("O valor na posicao[%d][%d] e: %d\n", piLinha, piColuna,
           *(paMatriz + (piLinha * DIMENSAO) + piColuna));
}
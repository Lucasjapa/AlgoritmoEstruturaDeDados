/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

   Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j.
   Em seguida, imprima os caracteres contidos no segmento que vai de i a j da string S.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 100

int main()
{
    char string[TAMANHO_VETOR];
    int i, j;

    // Lê a string e os valores de i e j em uma única linha
    scanf("%s %d %d", string, &i, &j);

    // Exibe a string na saída padrão.
    for (i; i <= j; i++)
    {
        printf("%c", string[i]);
    }

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}

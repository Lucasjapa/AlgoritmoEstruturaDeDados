/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos caracteres ela possui.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 100

int main()
{
    char *string;    // Ponteiro para armazenar os dados de entrada como string.
    int i, cont = 0; // Variáveis usadas para iterar no loop e contar os caracteres.

    // Aloca na heap espaço para 100 inteiros e verifica se o espaço foi alocado corretamente.
    string = malloc(TAMANHO_VETOR * sizeof(char));
    if (string == NULL)
    {
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    // Lê uma string da entrada padrão.
    fgets(string, 100, stdin);

    // Conta os caracteres na string, excluindo o caractere de nova linha.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        if (*(string + i) != '\n')
        {
            cont++;
        }
        else
        {
            break; // Sai do loop se encontrar o caractere de nova linha.
        }
    }

    // Exibe o número de caracteres na string, excluindo o caractere de nova linha.
    printf("%d", cont);

    // Libera a memória alocada para os vetores.
    free(string);

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}

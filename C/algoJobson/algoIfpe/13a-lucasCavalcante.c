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
    char string[TAMANHO_VETOR]; // Vetor para armazenar os dados de entrada como string.
    int i, cont = 0;            // Variáveis usadas para iterar no loop e contar os caracteres.

    // Lê uma string da entrada padrão.
    fgets(string, 100, stdin);

    // Conta os caracteres na string, excluindo o caractere de nova linha.
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        if (string[i] != '\n')
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

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}

/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Faça um programa que leia uma string e imprima as quatro primeiras letras dela.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 100

int main()
{
    char string[TAMANHO_VETOR]; // Vetor para armazenar os dados de entrada como string.
    int i;                      // Variável usada para iterar no loop.

    gets(string); // Lê uma string da entrada padrão de forma segura.

    // Exibe os primeiros 4 caracteres da string na saída padrão.
    for (i = 0; i < 4; i++)
    {
        printf("%c", string[i]);
    }

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}

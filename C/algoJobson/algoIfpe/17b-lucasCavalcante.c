/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

   Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em maiúscula.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_VETOR 100

int main()
{
    char *string;
    int tamanhoString, inicio = 0;

    // Aloca na heap espaço para 100 char e verifica se o espaço foi alocado corretamente.
    string = malloc(TAMANHO_VETOR * sizeof(char));
    if (string == NULL)
    {
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    gets(string); // Lê uma string da entrada padrão de forma segura.

    // Calcula o tamanho real da string lida.
    tamanhoString = strlen(string);

    // Converte todos os caracteres da string em maiúsculas.
    while (inicio < tamanhoString)
    {
        *(string + inicio) = toupper(*(string + inicio));
        inicio++;
    }

    // Exibe a string na saída padrão.
    for (inicio = 0; inicio < tamanhoString; inicio++)
    {
        printf("%c", *(string + inicio));
    }

    // Libera a memória alocada para os vetores.
    free(string);

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}

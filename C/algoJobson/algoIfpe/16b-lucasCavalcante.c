/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

   Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um palíndromo ou não.
   Um palíndromo é uma palavra que tem a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
   Exemplos: ovo, arara, rever, asa, osso etc.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_VETOR 100

int main()
{
    char *string; // Ponteiro para armazenar os dados de entrada.
    int tamanhoString, inicio = 0, palindromo = 0;

    // Aloca na heap espaço para 100 inteiros e verifica se o espaço foi alocado corretamente.
    string = malloc(TAMANHO_VETOR * sizeof(char));
    if (string == NULL)
    {
        printf("Falha ao alocar memoria.\n");
        return 1;
    }

    gets(string); // Lê uma string da entrada padrão de forma segura.

    // Calcula o tamanho real da string lida.
    tamanhoString = strlen(string) - 1; // Descontando o caractere de nova linha (\n).

    // Verifica se a string é um palíndromo.
    while (inicio < tamanhoString)
    {
        if (*(string + inicio) != *(string + tamanhoString))
        {
            palindromo = 1;
            break;
        }
        inicio++;
        tamanhoString--;
    }

    // Exibe "N" se não for um palíndromo, caso contrário, exibe "S".
    if (palindromo == 1)
    {
        printf("N");
    }
    else
    {
        printf("S");
    }

    // Libera a memória alocada para os vetores.
    free(string);

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}

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
    char string[TAMANHO_VETOR];
    int tamanhoString, inicio = 0, palindromo = 0;

    gets(string); // Lê uma string da entrada padrão de forma segura.

    // Calcula o tamanho real da string lida.
    tamanhoString = strlen(string) - 1; // Descontando o caractere de nova linha (\n).

    // Verifica se a string é um palíndromo.
    while (inicio < tamanhoString)
    {
        if (string[inicio] != string[tamanhoString])
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

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}

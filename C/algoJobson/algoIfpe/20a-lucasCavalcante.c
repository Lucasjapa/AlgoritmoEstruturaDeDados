/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

   O código de César é uma das técnicas de cifragem mais simples e conhecidas.
   É um tipo de substituição no qual cada letra do texto é substituída por outra, que se apresenta n posições após ela no alfabeto.
   Por exemplo, com uma troca de três posições, a letra A seria substituída por D, B se tornaria E e assim por diante.
   Escreva um programa que faça uso desse código de César para três posições. Entre com uma string e imprima a string codificada.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_VETOR 500

int main()
{
    // Declaração do array de caracteres e da variável base
    char string[TAMANHO_VETOR], base;

    // Lê uma linha de entrada do usuário e armazena na variável string
    fgets(string, 500, stdin);

    // Loop para percorrer todos os caracteres da string até encontrar uma quebra de linha
    for (int i = 0; string[i] != '\n'; i++)
    {
        // Verifica se o caractere atual é um espaço em branco
        if (string[i] == ' ')
        {
            printf(" ");
        }
        else
        {
            // Determina se a base para o deslocamento é 'A' (maiúsculas) ou 'a' (minúsculas)
            base = isupper(string[i]) ? 'A' : 'a';
            // Aplica o código de César para deslocar a letra em três posições no alfabeto
            string[i] = base + (string[i] - base + 3) % 26;
            // Imprime o caractere modificado
            printf("%c", string[i]);
        }
    }

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}

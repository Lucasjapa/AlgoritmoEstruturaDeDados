/*
    Institui��o: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Lucas Cavalcante da Silva
    Data: 01/03/2024

    Faça um programa para ler 10 números diferentes a serem armazenados em um vetor.
    Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que,
    caso o usuário digite um número que já foi digitado anteriormente,
    o programa deverá pedir a ele para digitar outro número.
    Note que cada valor digitado pelo usuário deve ser pesquisado no vetor,
    verificando se ele existe entre os números que já foram fornecidos. ]
    Exiba na tela o vetor final que foi digitado.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 10

int main()
{
    // Porque ao declarar contador com char ele zera o primeiro valor após inserir o segundo valor?
    int vetor[TAMANHO_VETOR], contador = 0, valor; // Vetor para armazenar os dados de entrada.
    char i = 0, validador = 0;                     // Variável usada para iterar no loop.

    // Exibe a solicitação inicial para o usuário inserir um número.
    printf("(): ");
    scanf("%d", &vetor[contador]);
    contador++;

    while (contador <= TAMANHO_VETOR)
    {
        validador = 0;
        if (contador < 10)
        {
            // Exibe o vetor atualizado com parênteses
            printf("(");
            for (i = 0; i < contador; i++)
            {
                printf("%d", vetor[i]);
                if (i < contador - 1 && contador > 1)
                {
                    printf(", ");
                }
            }
            printf("): ");
            scanf("%d", &valor);

            // Verifica se o valor já existe no vetor.
            for (i = 0; i < contador; i++)
            {
                if (vetor[i] == valor)
                {
                    validador = 1;
                    break;
                }
            }

            // Se o valor não existir no vetor, adiciona-o.
            if (validador == 0)
            {
                vetor[contador] = valor;
                contador++;
            }
        }
        else
        {
            // Exibe o vetor final completo
            printf("(");
            for (i = 0; i < contador; i++)
            {
                printf("%d", vetor[i]);
                if (i < contador - 1 && contador > 1)
                {
                    printf(", ");
                }
            }
            printf(")");
            break; // Saia do loop, já que não precisamos inserir mais valores
        }
    }

    // Retorna 0 para o sistema operacional indicando que o programa terminou com sucesso.
    return EXIT_SUCCESS;
}

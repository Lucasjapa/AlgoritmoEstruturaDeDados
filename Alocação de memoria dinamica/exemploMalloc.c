#include <stdio.h>

int main()
{

    int qtd;

    int numeros[3]; // 0..n-1 -> 0...2

    // numeros[0] = 55;
    // numeros[1] = 43;
    // numeros[2] = 2;

    for (int i = 0; i < 3; i++)
    {
        printf("Informe o valor para a posicao %d do vetor: ", i);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("No vetor 'numeros[%d]' esta o valor: %d\n", i, numeros[i]);
    }

    printf("A variavel 'numeros[0]' vale %d e ocupa %ld bytes em memoria.\n", numeros[0], sizeof(numeros[0]));
    printf("A variavel 'numeros[1]' vale %d e ocupa %ld bytes em memoria.\n", numeros[1], sizeof(numeros[1]));
    printf("A variavel 'numeros[2]' vale %d e ocupa %ld bytes em memoria.\n", numeros[2], sizeof(numeros[2]));
    printf("A variavel 'numeros' ocupa %ld bytes em memoria.\n", sizeof(numeros));
}
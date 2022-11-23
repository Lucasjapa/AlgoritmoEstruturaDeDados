#include <stdio.h>

int main(void)
{

    int i, x, y;
    double valores[8], soma;

    printf("Informe os 8 valores do vetor:\n");

    for (i = 0; i < 8; i++)
    {
        printf("Valor da posicao %d:", i);
        scanf("%lf", &valores[i]);
    }

    printf("\nInforme 2 posicoes do vetor:\n");
    printf("Primeira posicao:");
    scanf("%d", &x);

    printf("Segunda posicao:");
    scanf("%d", &y);

    soma = valores[x] + valores[y];

    printf("\nO valor da soma referente aos valores das posicoes informada e:\n");
    printf("%.2lf", soma);
}
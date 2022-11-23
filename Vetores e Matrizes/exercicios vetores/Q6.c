#include <stdio.h>

int main(void)
{

    int i;
    double valores[10], maior, menor;

    printf("Informe 10 numeros:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Valor %d: ", i);
        scanf("%lf", &valores[i]);
    }

    maior = valores[0];
    menor = valores[0];

    for (i = 0; i < 10; i++)
    {
        if (valores[i] > maior)
        {
            maior = valores[i];
        }

        if (valores[i] < menor)
        {
            menor = valores[i];
        }
    }

    printf("O maior elemento do vetor e: %.2lf\n", maior);
    printf("O menor elemento do vetor e: %.2f", menor);
}
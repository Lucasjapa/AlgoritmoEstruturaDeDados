#include <stdio.h>

int main()
{

    int n;
    int *p, *teste;
    int valores[5];

    printf("Informe um valor:\n");
    scanf("%d", &n);

    // Passo o endereço de memoria para o ponteiro, dessa forma não preciso
    // ficar manuseando diretamente o endereço de memoria, fico manuseando o ponteiro.
    p = &n;
    teste = valores;
    addVetor(teste);

    printf("Teste valor do ponteiro: %d\n", &n);
    printf("Teste valor do ponteiro: %d\n", n);
    printf("Teste valor do ponteiro: %d\n", p);
    printf("Teste valor do ponteiro: %d\n\n\n", *p);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", valores[i]);
    }
}

void addVetor(int *vetor)
{
    int b = 5;
    for (int i = 0; i < 5; i++)
    {
        vetor[i] = b++;
    }
}
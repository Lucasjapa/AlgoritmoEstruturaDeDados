#include <stdio.h>

#define N 3

typedef struct FILA
{
    int dados[N];
    int fim;
} FILA;

void inicializarFila(FILA *f)
{
    int i;
    for (i = 0; i < N; i++)
    {
        f->dados[i] = 0;
    }
    f->fim = 0;
}

void enfileirar(int dado, FILA *f)
{
    if (f->fim == N)
    {
        printf("Fila esta cheia, nao foi possivel enfileirar %d.\n", dado);
        return;
    }
    else
    {
        printf("Enfileirando: %d\n", dado);
        f->dados[f->fim] = dado;
        f->fim++;
    }
}

void desenfileirar(FILA *f)
{
    int i;
    if (f->fim == 0)
    {
        printf("Fila vazia.\n");
        return;
    }
    else
    {
        printf("Desenfileirando: %d\n", f->dados[0]);
        for (i = 0; i < f->fim - 1; i++)
        {
            f->dados[i] = f->dados[i + 1];
        }
        f->fim--;
    }
}

void imprimeFila(FILA *f)
{
    int i;
    printf("Imprimindo a fila: ");
    for (i = 0; i < f->fim; i++)
    {
        printf("%d ", f->dados[i]);
    }
}

int main()
{
    FILA f1;

    inicializarFila(&f1);

    enfileirar(3, &f1);
    enfileirar(6, &f1);
    enfileirar(1, &f1);
    enfileirar(50, &f1);
    desenfileirar(&f1);
    desenfileirar(&f1);
    enfileirar(50, &f1);
    desenfileirar(&f1);
    // desenfileirar(&f1);

    imprimeFila(&f1);

    return 0;
}
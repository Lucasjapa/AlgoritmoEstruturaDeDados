#include <stdio.h>

#define N 3

typedef struct PILHA
{
    int dados[N];
    int topo;
} PILHA;

void inicializarPilha(PILHA *p)
{
    int i;
    for (i = 0; i < N; i++)
    {
        p->dados[i] = 0;
    }
    p->topo = 0;
}

void empilha(int dado, PILHA *p)
{
    if (p->topo == N)
    {
        printf("Pilha cheia, não foi possivel empilhar %d.\n", dado);
        return;
    }
    else
    {
        printf("Empilhando: %d\n", dado);
        p->dados[p->topo] = dado;
        p->topo++;
    }
}

void desempilha(PILHA *p)
{
    if (p->topo == 0)
    {
        printf("Pilha vazia.\n");
        return;
    }
    else
    {
        p->topo--;
        printf("Desempilhando: %d\n", p->dados[p->topo]);
    }
}

void imprimePilha(PILHA *p)
{
    int i;
    printf("Imprimindo a pilha: ");
    for (i = 0; i < p->topo; i++)
    {
        printf("%d ", p->dados[i]);
    }
}

int main()
{
    PILHA p1;

    inicializarPilha(&p1);

    empilha(3, &p1);
    empilha(6, &p1);
    empilha(1, &p1);
    empilha(50, &p1);
    desempilha(&p1);
    desempilha(&p1);
    desempilha(&p1);
    desempilha(&p1);

    imprimePilha(&p1);

    return 0;
}
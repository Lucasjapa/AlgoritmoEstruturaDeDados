#include <stdio.h>

typedef struct NO
{
    int dado;
    struct NO *prox;
} NO;

typedef struct PILHA
{
    NO *topo;
} PILHA;

void inicializarPilha(PILHA *p)
{
    p->topo = NULL;
}

void empilha(int dado, PILHA *p)
{
    NO *ptr = (NO *)malloc(sizeof(NO));
    if (ptr == NULL)
    {
        printf("Erro de alocação de um novo no.\n");
        return;
    }
    else
    {
        ptr->dado = dado;
        ptr->prox = p->topo;
        p->topo = ptr;
    }
}

void desempilha(PILHA *p)
{
    NO *ptr = p->topo;

    if (ptr == NULL)
    {
        printf("Pilha vazia.\n");
        return;
    }
    else
    {
        // Duvida se é necessario esse ptr->prox = NULL;.
        p->topo = ptr->prox;
        ptr->prox = NULL;
        printf("Desempilhando: %d\n", ptr->dado);
        free(ptr);
    }
}

void imprimePilha(PILHA *p)
{
    NO *ptr = p->topo;
    if (ptr == NULL)
    {
        printf("Pilha vazia.\n");
        return;
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->dado);
            ptr = ptr->prox;
        }
        printf("\n");
    }
}

int main()
{
    PILHA *p1 = (PILHA *)malloc(sizeof(PILHA));
    if (p1 == NULL)
    {
        printf("Erro de alocação de nó./n");
        exit(0);
    }
    else
    {
        inicializarPilha(p1);
        empilha(3, p1);
        empilha(6, p1);
        empilha(1, p1);
        empilha(50, p1);
        desempilha(p1);
        desempilha(p1);
        desempilha(p1);
        // desempilha(p1);
        imprimePilha(p1);
    }

    return 0;
}
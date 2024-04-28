#include <stdio.h>
#include <stdlib.h>

#define HASHTABLE_SIZE 10
#define HASHTABLE_SIZE_CONFLICT 19

// Cria tipo Node a partir da definição da estrutura do nó da lista
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Cria tipo LinkedList
typedef struct LinkedList
{
    Node *head;
    Node *tail;
    int size;
} LinkedList;

// Cria tipo Hashtable
typedef struct Hashtable
{
    LinkedList *table[HASHTABLE_SIZE];
    int size;
} Hashtable;

// Função para criar um novo nó
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(1 * sizeof(Node));
    if (newNode == NULL)
    {
        printf("Erro ao alocar memória para o novo nó.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Função iniciar uma LinkedList vazia
LinkedList *initLinkedList()
{
    LinkedList *newLinkedList = (LinkedList *)malloc(1 * sizeof(LinkedList));
    newLinkedList->head = NULL;
    newLinkedList->tail = NULL;
    newLinkedList->size = 0;
    return newLinkedList;
}

// Função para inserir um novo nó no final da lista
void insertLinkedList(LinkedList *list, int data)
{
    Node *newNode = createNode(data);
    if (list->size == 0)
    {
        list->head = newNode;
    }
    else
    {
        list->tail->next = newNode;
    }
    list->tail = newNode;
    list->size++;
}

// Função para imprimir os elementos da lista
void printLinkedList(LinkedList *list)
{
    Node *current = list->head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Função iniciar uma Hashtable vazia
Hashtable *initHashTable()
{
    Hashtable *newHashtable = (Hashtable *)malloc(sizeof(Hashtable));
    for (int i = 0; i < HASHTABLE_SIZE; i++)
    {
        newHashtable->table[i] = initLinkedList();
    }
    newHashtable->size = 0;

    return newHashtable;
}

// Função Hash
int calcHash(int key)
{
    return key % HASHTABLE_SIZE;
}
// Função para inserir na tabela Hash
void insertHashTable(Hashtable *ht, int key)
{
    int i = calcHash(key);
    insertLinkedList(ht->table[i], key);
}

// Função para inserir na tabela Hash
void printHashTable(Hashtable *ht)
{
    int i;
    for (i = 0; i < HASHTABLE_SIZE; i++)
    {
        printf("%d = ", i);
        printLinkedList(ht->table[i]);
    }
}

int main()
{
    LinkedList *L1 = initLinkedList();
    Hashtable *H1 = initHashTable();
    insertHashTable(H1, 2);
    insertHashTable(H1, 3);
    insertHashTable(H1, 5);
    insertHashTable(H1, 8);
    insertHashTable(H1, 13);
    insertHashTable(H1, 21);
    insertHashTable(H1, 34);
    insertHashTable(H1, 55);
    insertHashTable(H1, 345);
    printHashTable(H1);
    // insertLinkedList(L1, 2);
    // insertLinkedList(L1, 3);
    // insertLinkedList(L1, 5);
    // insertLinkedList(L1, 8);
    // insertLinkedList(L1, 13);
    // insertLinkedList(L1, 21);
    // insertLinkedList(L1, 34);
    // printLinkedList(L1);
    return EXIT_SUCCESS;
}
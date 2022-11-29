#include <stdio.h>
#include <string.h>

// A union, separa e utiliza apenas o espaço da maior variavel.
union pessoa
{
    char nome[100]; // 1 char = 1 byte -> 1 * 100 = 100 bytes
    int idade;      // 4 bytes -> total de 104 bytes
};

int main()
{
    union pessoa pes;

    strcpy(pes.nome, "Lucas Cavalcante");

    pes.idade = 39;
    printf("Ela tem %d anos\n", pes.idade);

    printf("A variavel 'pes' esta ocupando %ld bytes em memoria.", sizeof(pes));

    // int numero = 42;
    // float nota = 7.9;
    // char letra = 'd';
    // double outraNota = 19.4;

    // printf("A variavel 'numero' tem valor %d e ocupa %ld bytes em memoria\n", numero, sizeof(numero));
    // printf("A variavel 'nota' tem valor %.2f e ocupa %ld bytes em memoria\n", nota, sizeof(nota));
    // printf("A variavel 'letra' tem valor %c e ocupa %ld bytes em memoria\n", letra, sizeof(letra));
    // printf("A variavel 'letra' tem valor %.2f e ocupa %ld bytes em memoria\n", outraNota, sizeof(outraNota));

    return 0;
}
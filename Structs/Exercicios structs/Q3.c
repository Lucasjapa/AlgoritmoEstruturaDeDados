#include <stdio.h>
#include <string.h>

struct st_aluno
{
    char nome[50];
    int matricula;
    char curso[50];
};

int main()
{

    struct st_aluno alunos[5];

    for (int i = 0; i < 5; i++)
    {
        strcpy(alunos[i].nome, "Aluno teste");
        alunos[i].matricula = i;
        strcpy(alunos[i].curso, "CURSOOO SUPERIOR TESTE");
    }

    printf("========== ALUNOS =========\n");

    for (int i = 0; i < 5; i++)
    {
        printf("========= ALUNO %d ========\n", (i + 1));
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n\n", alunos[i].curso);
    }
}
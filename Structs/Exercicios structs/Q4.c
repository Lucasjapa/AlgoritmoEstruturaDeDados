#include <stdio.h>
#include <string.h>

struct st_aluno
{
    char matricula[10];
    char nome[100];
    float notas[3];
};

int main()
{

    struct st_aluno alunos[5];

    for (int i = 0; i < 2; i++)
    {
        printf("Informe a matricula do aluno %d: ", (i + 1));
        fgets(alunos[i].matricula, 10, stdin);

        printf("Informe nome do aluno %d: ", (i + 1));
        fgets(alunos[i].nome, 100, stdin);

        for (int j = 0; j < 3; j++)
        {
            printf("Informe a nota %d do aluno %d: ", (j + 1), (i + 1));
            scanf("%f", &alunos[i].notas[j]);
            getchar();
        }
    }

    maiorNotaP1(alunos);

    for (int i = 0; i < 2; i++)
    {
        printf("========= ALUNO %d =========\n ", (i + 1));
        printf("MATRICULA: %s\n ", alunos[i].matricula);
        printf("NOME: %s ", alunos[i].nome);
        for (int j = 0; j < 3; j++)
        {
            printf("PROVA %d: %.2f\n", (j + 1), alunos[i].notas[j]);
        }
    }
}

maiorNotaP1(struct st_aluno *alunos)
{
    int maior = 0;
    struct st_aluno aluno;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (alunos[i].notas[j] > maior)
            {
                maior = alunos[i].notas[j];
                aluno = alunos[i];
            }
        }
    }

    printf("ALUNO %s tem a maior nota!!", aluno.nome);
}
#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    int matricula;
    char nome[50];
    float nota;
};

int main()
{

    struct aluno *p;
    int n;
    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    p = (struct p *)malloc(n * sizeof(struct aluno));
    if (p == NULL)
    {
        printf("Erro: memoria insuficiente.\n");
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Matricula: ");
        scanf("%d", &p[i].matricula);
        getchar();
        printf("Nome: ");
        gets(p[i].nome, 50, stdin);
        printf("Nota: ");
        scanf("%f", &p[i].nota);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (p[i].nota < 4)
        {
            printf("\nMatricula: %d\nNome: %s\nNota: %.2f\nREPROVADO!\n", p[i].matricula, p[i].nome, p[i].nota);
        }
        if (p[i].nota >= 4 && p[i].nota < 7)
        {
            printf("\nMatricula: %d\nNome: %s\nNota: %.2f\nEXAME!\n", p[i].matricula, p[i].nome, p[i].nota);
        }
        if (p[i].nota >= 7)
        {
            printf("\nMatricula: %d\nNome: %s\nNota: %.2f\nAPROVADO!\n", p[i].matricula, p[i].nome, p[i].nota);
        }
    }

    return 0;
}

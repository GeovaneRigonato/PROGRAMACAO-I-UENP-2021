#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    int matricula;
    int materia;
};

int main()
{
    struct aluno *p;

    int numAlunos;
    printf("Número de códigos: ");
    scanf("%d", &numAlunos);

    
    p = (struct aluno *)calloc(numAlunos, sizeof(struct aluno));
    if(p == NULL){
        printf("Erro: memoria insuficiente.\n");
        exit(1);
    }
    printf("\nDigite: \n1 - prog1.\n");
    printf("2 - prog2.\n");
    printf("3 - ambas.\n\n");
    for (int i = 0; i < numAlunos; i++)
    {
        getchar();
        printf("Matricula: ");
        scanf("%d", &p[i].matricula);

        printf("Materia: ");
        scanf("%d", &p[i].materia);
    }

    printf("Alunos que participam das duas materias: \n");
    for (int i = 0; i < numAlunos; i++){
        if (p[i].materia == 3)
        {
            printf("Matricula: %d\n", p[i].matricula);
        }
    }
    return 0;
}

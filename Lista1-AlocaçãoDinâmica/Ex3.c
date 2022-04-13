#include <stdio.h>
#include <stdlib.h>

#define MAX 2

int main()
{
    int **m1, **m2, **soma, i, j;
    m1 = (int **)malloc(MAX * sizeof(int *));
    if (m1 == NULL)
        {
            printf("Erro: memoria insuficiente.\n");
            exit(1);
        }
    for (i = 0; i < MAX; i++)
    {
        m1[i] = (int *)malloc(MAX * sizeof(int));
        
        for (j = 0; j < MAX; j++)
        {
            printf("m1[%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    m2 = (int **)malloc(MAX * sizeof(int *));
    if (m2 == NULL)
    {
        printf("Erro: memoria insuficiente.\n");
        exit(1);
    }

    for (i = 0; i < MAX; i++)
    {
        m2[i] = (int *)malloc(MAX * sizeof(int));
        for (j = 0; j < MAX; j++)
        {
            printf("m2[%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    soma = (int **)malloc(MAX * sizeof(int *));
    if (soma == NULL)
    {
        printf("Erro: memoria insuficiente.\n");
        exit(1);
    }

    for (i = 0; i < MAX; i++)
    {
        soma[i] = (int *)malloc(MAX * sizeof(int));
        for (j = 0; j < MAX; j++)
        {
            soma[i][j] = m2[i][j] + m1[i][j];
        }
    }

    printf("\nsoma[i][j]:\n");
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {

            printf("%d  ", soma[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < MAX; i++)
    {
        free(soma[i]);
        free(m2[i]);
        free(m1[i]);
    }
    free(soma);
    free(m2);
    free(m1);

    return 0;
}

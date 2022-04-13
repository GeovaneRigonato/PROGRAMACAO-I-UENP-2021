#include <stdio.h>
#include <stdlib.h>
#define MAX 200

void ultimaPalavra(char p[MAX], char palavra[MAX])
{
    int j = 0;
    for (int i = 0; p[i] != '\0'; i++)
    {

        palavra[j] = p[i];
        if (palavra[j] == ' ')
        {
            if (p[i + 1] != ' ' && p[i + 1] != '\0')
                j = 0;
        }
        else
            j++;
    }
    palavra[j] = '\0';
    printf("%s", palavra);
}


int main()
{
    char string[MAX];
    char palavra[MAX];
    char *p = &string;

    p = (char *)malloc(sizeof(char));

    if (p == NULL)
    {
        printf("Erro: memoria insuficiente.\n");
        exit(1);
    }
    printf("Digite a frase: ");
    getchar();
    gets(p, MAX);
    printf("Ultima palavra da String: ");
    ultimaPalavra(p, palavra);
    printf("\n");

    return 0;
}
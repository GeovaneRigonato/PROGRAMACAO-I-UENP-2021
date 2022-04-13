#include <stdio.h>
#include <stdlib.h>

struct loja
{
    char nome[50];
    char endereco[50];
    char telefone[50];
    float precoProduto;
};

int main()
{
    struct loja *p;
    float somaPreco = 0;
    int n;
    printf("Quantidade de Lojas: ");
    scanf("%d", &n);

    p = (struct p *)malloc(n * sizeof(struct loja));
    if (p == NULL)
        {
            printf("Erro: memoria insuficiente.\n");
            exit(1);
        }
    for (int i = 0; i < n; i++)
    {
        getchar();
        printf("Nome: ");
        gets((p[i].nome));
        printf("Endereco: ");
        gets((p[i].endereco));
        printf("Telefone: ");
        gets((p[i].telefone));
        printf("Preço: ");
        scanf("%f", &p[i].precoProduto);

        somaPreco = somaPreco + p[i].precoProduto;
    }

    float mediaPreco = somaPreco / n;

    printf("\n\nMedia dos Precos: %.2f", mediaPreco);

    printf("\nRelação empresas com preço menor que a media: \n");
    for (int i = 0; i < n; i++)
    {
        if (p[i].precoProduto < mediaPreco)
        {
            printf("\nNome: %s\nEndereco: %s\nTelefone: %s\nPreco: %.2f\n", p[i].nome, p[i].endereco, p[i].telefone, p[i].precoProduto);
        }
    }

    return 0;
}
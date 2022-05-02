#include <stdio.h>
#include <stdlib.h>
#include<time.h>

struct consumo
{
    int cartao;
    int codigo;
    int quantidade;
};

struct produto
{
    int codigo;
    char descricao[100];
    float preco;
};

struct produto cadastroProdutos(struct produto p)
{

    FILE *file;
    printf("|--------------------------------------|\n");
    printf("|---------CADASTRO DE PRODUTOS---------|\n");
    printf("|--------------------------------------|\n\n");

    if ((file = fopen("produtos.txt", "a")) == NULL)
    {
        printf("Falha ao abrir o arquivo");
        exit(1);
    }
    p.codigo = rand() % 10000;
    fprintf(file, "%d ", p.codigo);
    printf("Descricao: ");
    getchar();
    gets(p.descricao);
    fputs(p.descricao, file);
    fprintf(file, " ");

    printf("Preco: ");
    scanf("%f", &p.preco);
    fprintf(file, "%.2f", p.preco);
    fprintf(file, "\n");
    fclose(file);

return p;
}

struct consumo realizarConsumo(struct consumo c)


{
    FILE *file;

    file = fopen("consumos.txt", "a");
    if (file == NULL)
    {
        printf("Falha ao abrir o arquivo");
        exit(1);
    }

    printf("|---------------------------------------|\n");
    printf("|----------- REALIZAR PEDIDO -----------|\n");
    printf("|---------------------------------------|\n\n");

    printf("Cartao: ");
    scanf("%d", &c.cartao);
    fprintf(file, "%d ", c.cartao);

    printf("codigo: ");
    scanf("%d", &c.codigo);
    fprintf(file, "%d ", c.codigo);

    printf("Quantidade: ");
    scanf("%d", &c.quantidade);
    fprintf(file, "%d", c.quantidade);
    fprintf(file, "\n");
    fclose(file);
}

struct consumo finalizarPedido(struct consumo c, struct produto p){

}

int main()
{
     srand(time(NULL));

    int controleMenu, cartao;
    struct produto produtos;
    struct consumo consumos;

    while (controleMenu != 4)
    {
        printf("|--------------------------------------|\n");
        printf("|---------------- MENU ----------------|\n");
        printf("|--------------------------------------|\n");
        printf("|-------- 1 - Cadastrar produtos ------|\n");
        printf("|--------------------------------------|\n");
        printf("|-------- 2 - Realizar pedidos --------|\n");
        printf("|--------------------------------------|\n");
        printf("|-------- 3 - Finalizar pedidos -------|\n");
        printf("|--------------------------------------|\n");
        printf("|-------- 4 - Fechar aplicacao --------|\n");
        printf("|--------------------------------------|\n");
        printf("\nDigite a opção que deseja: ");
        scanf("%d", &controleMenu);
        switch (controleMenu)
        {
        case 1:
            cadastroProdutos(produtos);
            break;
        case 2:
            realizarConsumo(consumos);
        case 3:
            finalizarPedido(consumos,produtos);
        }
    }
    printf("\n\n.......Finalizando a aplicação........\n\n");
    exit(0);

    return 0;
}

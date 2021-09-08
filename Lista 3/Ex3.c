/*Fa ̧ca um programa que receba dois n ́umeros “x” e “y” e execute as opera ̧c ̃oes especificadas
na Tabela 1, de acordo com a op ̧c ̃ao escolhida pelo usu ́ario. Caso a op ̧c ̃ao escolhida seja

inv ́alida, o programa deve mostrar uma mensagem de erro e finalizar sua execu ̧c ̃ao. Lembre-
se de que na divis ̃ao “y“ deve ser diferente de zero.

Tabela 1: Op ̧c ̃oes dispon ́ıveis

Op ̧c ̃oes Opera ̧c ̃oes
1 M ́edia aritm ́etica entre x e y
2 Diferen ̧ca do maior pelo menor n ́umero
3 Produto entre x e y
4 Divis ̃ao entre x e y*/

#include <stdio.h>

int main()
{
    float x,y, operacao;
    int escolha;
    printf("\nDigite os dois números separados por um espaço: ");
    scanf("%f%f",&x,&y);
    printf("\n1 - Media aritimetica entre x e y\n2 - Diferenca do maior pelo menor\n3 - Produto entre x e y\n4 - Divisao entre x e y\n");
    scanf("%d",&escolha);
    if(escolha > 0 && escolha < 5) {
        switch(escolha) {
        case(1):
            operacao= x + y;
            printf("\nMedia aritmetica: %.2f\n",operacao);
            break;

        case(2):
            if(x > y) {
                operacao = x - y;
                printf("Diferenca do maior pelo menor: %.2f\n",operacao);
                break;
            }
            else
                operacao = x - y;
            printf("Diferenca do maior pelo menor: %.2f\n",operacao);
            break;

        case(3):
            operacao = x * y;
            printf("\nProduto: %.2f\n",operacao);
            break;

        case(4):
            if(y != 0) {
                operacao = x / y;
                printf("\nDivisão: %.2f\n",operacao);
            }
        }

    }
    else {
        getchar();
    }
    return 0;
}

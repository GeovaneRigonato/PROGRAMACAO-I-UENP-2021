/*Uma pequena merceraria resolveu dar descontos para agradar seus clientes. A mercearia
cont ́em apenas 4 itens, cujos pre ̧cos s ̃ao dados pela Tabela 2.
Tabela 1: Pre ̧cos dos produtos
C ́odigo Pre ̧co unit ́ario
1 R$ 5,30
2 R$ 6,00
3 R$ 3,20
4 R$ 2,50

A regra de desconto  ́e bem simples: se a quantidade de produtos comprados for igual ou
maior que quinze, ent ̃ao o desconto  ́e concedido. O desconto tamb ́em  ́e concedido caso o
valor total da compra seja maior ou igual a 40 reais. O valor do desconto  ́e de 15%.
Fa ̧ca uma programa que leia o c ́odigo do produto, a quantidade comprada e exiba o valor
que o cliente deve pagar, j ́a considerando o desconto quando aplic ́avel. Considere que o
cliente s ́o pode comprar um  ́unico tipo produto cada vez que usar o seu software.*/

#include <stdio.h>
int main()
{
    int codigo, quantidade; // declara a variavel
    float preco; // declara a variavel
    float valorTotal = 15, desconto;
    printf("Entre com o cógido e a quantidade: ");
    scanf("%d%d", &codigo, &quantidade); // recebe os valores e atribui as devidas variaveis


    if(codigo == 1) {// verifica o código
        preco = 5.30; // atribui o preco quando esse codigo é escolhido
        valorTotal  = (preco * quantidade); // verifica o valor total a ser pago
        if(valorTotal > 40 || quantidade > 15) { // verifica se o desconto é aplicável
            desconto = valorTotal - (valorTotal * 0.15); //  se aplicavel, da o desconto
            printf("1Valor a pagar: R$ %.2f", desconto); // imprime o desconto
        }
        else { // se o desconto nao for aplicavel, imprime o valor total a ser pago
            printf("2Valor a pagar: R$%.2f", valorTotal);
        }
    }
    else if(codigo == 2) {
        preco = 6.00;
        valorTotal  = (preco * quantidade);
        if(valorTotal > 40 || quantidade > 15) {
            desconto = valorTotal - (valorTotal * 0.15);
            printf("Valor a pagar: R$ %.2f", desconto);
        }
        else printf("Valor a pagar: R$%.2f", valorTotal);
    }
    else if(codigo == 3) {
        preco = 3.20;
        valorTotal  = (preco * quantidade);
        if(valorTotal > 40 || quantidade > 15) {
            desconto = valorTotal - (valorTotal * 0.15);
            printf("Valor a pagar: R$ %.2f", desconto);
        }
        else printf("Valor a pagar: R$%.2f", valorTotal);
    }
    else if(codigo = 4) {
        preco = 2.50;
        valorTotal  = (preco * quantidade);
        if(valorTotal > 40 || quantidade > 15) {
            desconto = valorTotal - (valorTotal * 0.15);
            printf("Valor a pagar: R$ %.2f", desconto);
        }
        else printf("Valor a pagar: R$%.2f", valorTotal);
    }



    return 0;
}

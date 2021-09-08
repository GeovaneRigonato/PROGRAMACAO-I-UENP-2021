/*Um escrit ́orio de contabilidade deseja realizar o reajuste do sal ́ario dos funcion ́arios de
todos os seus clientes. Neste caso, ser ́a utilizado como base o reajuste acordado com os
sindicatos de cada categoria, conforme especificado na tabela a seguir. Vocˆe ficou incumbido
de auxiliar o escrit ́orio e sua tarefa  ́e: desenvolver um programa que receba o sal ́ario atual,
o cargo e calcule o reajuste do sal ́ario. O programa deve mostrar o valor do reajuste e o
sal ́ario j ́a atualizado. [1]

Pr ́atica com comandos condicionais em C: Por favor, prossiga na pr ́oxima p ́agina. . .

Programa ̧c ̃ao I 1. Semestre P ́agina 2 de 2

C ́odigo Cargo Reajuste
Concedido
001 Vendedor(a) 10%
002 Auxiliar de escrit ́orio 7%
003 Auxiliar de Enfermagem 12%
004 Bibliotec ́ario(a) 11%*/

#include <stdio.h>

int main()
{
    float salario,reajuste;
    int cargo;

    printf("\nDigite o salario e o código do cargo separados por um espaço: ");
    scanf("%f%d",&salario,&cargo);
    reajuste = salario;
    if(cargo == 1) {
        reajuste += salario * 0.10;
        printf("\nValor do reajuste: 10%\nSalario atualizado: R$ %.2f\n",reajuste);
    }
    else if(cargo == 2) {
        reajuste += salario * 0.7;
        printf("\nValor do reajuste: 7%\nSalario atualizado: R$ %.2f\n",reajuste);
    }
    else if(cargo == 3) {
        reajuste += salario * 0.12;
        printf("\nValor do reajuste: 12%\nSalario atualizado: R$ %.2f\n",reajuste);
    }
    else if(cargo == 4) {
        reajuste += salario * 0.11;
        printf("\nValor do reajuste: 11%\nSalario atualizado: R$ %.2f\n",reajuste);
    }

    //Outra maneira de fazer o programa
    /*switch(cargo){
        case(1):
        reajuste += salario * 0.10;
        printf("\nValor do reajuste: 10%\nSalario atualizado: R$ %.2f\n",reajuste);
        break;
        case(2):
        reajuste += salario * 0.7;
        printf("\nValor do reajuste: 7%\nSalario atualizado: R$ %.2f\n",reajuste);
        break;
        case(3):
        reajuste += salario * 0.12;
        printf("\nValor do reajuste: 12%\nSalario atualizado: R$ %.2f\n",reajuste);
        break;
        case(4):
        reajuste += salario * 0.11;
        printf("\nValor do reajuste: 11%\nSalario atualizado: R$ %.2f\n",reajuste);
        break;
    }*/

    return 0;
}

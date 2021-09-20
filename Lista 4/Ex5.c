/*Fa ̧ca um programa que receba como entrada um número inteiro n e exiba o resultado da seguinte
soma: S := 1 + 1/2 + 1/3 + 1/4 + ... + 1/n*/

#include <stdio.h>

int main()
{
        int n; // declara a variavel n
        double soma = 0, i; // declara as variaveis, e inicia a soma com 0
        printf(" Digite um número inteiro n: "); // imprime as instruções para o usuário
        scanf("%d", &n); // recebe o valor e atribui a n
        printf("\n Soma: S:="); // imprime na tela
        for (i = 1; i <= n; i++) // cria um for para percorrer o i de 1 até n e incrementa o mesmo
        {
                soma = soma + (1 / i); //  soma recebe o que tem nela mais 1 dividido pelo i
                printf(" 1/%.0lf", i); // imprime o valor i
                if (i < n) // verifica se i é menor que n, caso verdadeiro, imprime o sinal de +
                        printf(" +"); // imprime o sinal de +
        }
        printf("\n Soma: S:= %.2lf\n ", soma); // imprime a soma S:
        return 0;
}

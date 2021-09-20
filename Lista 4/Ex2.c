/*Faça um programa que receba como entrada um número inteiro entre 0 e 9999 e mostre todos os
seus divisores.*/

#include <stdio.h>

int main()
{
	int n, i = 1; // declara as variáveis e atribui valor ao i
	printf("Digite um número entre 0 e 9999: "); // imprime as instruções para o usuário
	scanf("%d", &n); // recebe o um valor e atribui a variável n
	if (n > 0 && n <= 9999)
	{									 // verifica se n está entre 0 e 9999, incluindo o 9999
		printf("\nDivisores de %d:", n); // imprime os divisores de n
		while (i <= n) // enquanto i for menor que n, faça
		{
			if (n % i == 0) //  se n dividido por i tiver resto 0, entao i é divisor de n
				printf("\n%d", i); // imprime i
			i++; // incrementa i
		}
		printf("\n"); // imprime um \n, apenas para pular uma linha
	}
	else
		printf("\nO número informado não se encaixa nos parâmetros !!! \n");// imprime o erro
	exit(0); // função que encerra o programa
	return 0;
}

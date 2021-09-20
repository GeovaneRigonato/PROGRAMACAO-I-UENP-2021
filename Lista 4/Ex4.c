/*Fa ̧ca um algoritmo que leia 10 valores e depois mostre o maior e o menor destes valores.*/

#include <stdio.h>

int main()
{
	int n, maior, menor, i; // declara as variáveis a serem utilizadas
	printf(" Digite o 1º número: ");
	scanf("%d", &n); // recebe e atribui a variável n
        maior = n;		 // atribui o valor de n a variavel maior
        menor = n;		 // atribui o valor de n a variavel maior
                for (i = 1; i < 10; i++){	// cria um laço de repetição, para que i seja incrementado até chegar ao 10º termo
                    printf(" Digite o %dº número: ", i + 1); // usa o "i + 1" para imprimir o próximo termo
                    scanf("%d", &n);						 // recebe e atribui a variavel n
                        if (n > maior)
                            maior = n; // verifica se o numero digitado é maior que o valor anterior digitado, se verdadeiro, atribui esse valor como maior
                                else if (n < menor)
                                    menor = n; // caso contrario, atribui n ao menor numero
                            }
	printf("\n Menor número => %d", menor);	  // imprime o menor numero digitado
	printf("\n Maior número => %d\n", maior); // imprime o maior numero digitado
	return 0;
}

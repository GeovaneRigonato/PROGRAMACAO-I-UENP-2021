/*Fa ̧ca um programa que receba como entrada dois nu ́meros inteiros e realize a multiplicação deles
sem utilizar o operador de *.*/
#include <stdio.h>

int main()
{
	int i = 1, a, b, resultado = 0; // declara as variáveis a serem utilizadas
	printf("Digite os números a serem multiplicados: ");
	scanf("%d%d", &a, &b); // recebe e atribui valor as variáveis
        while (i <= a){ // aplica a condição
            resultado += b;
            i++; // incrementa i
        }
            printf("\n%d * %d = %d\n", a, b, resultado); // imprime a multiplicação
        return 0;
}

/*Crie um programa para verifiar se um número é primo ou não.*/

#include <stdio.h>
int main()
{
    int n, num, count = 0; // declara as variáveis

    printf("Digite o número: ");
    scanf("%d", &num); // recebe e atribui o valor a variável
    n = num; // atribui o número digitado a variável n
    while (n > 1){
        if (num % n == 0) // se o número digitado dividido tiver resto 0, incrementa o count e decrementa o n.
            count++; // incrementa a variavel de controle
        n--;
    }
    if (count > 1){ // verifica se o count é 1 ou maior
        printf("\nO número %d não é primo.\n", num); // imprime se não é primo
    }else
        printf("\nO número %d é primo.\n", num); // imprime se é primo

    return 0;
}

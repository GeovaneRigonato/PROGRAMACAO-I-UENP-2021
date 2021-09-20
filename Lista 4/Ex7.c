/*Escreva um programa em C que mostre quais números inteiros entre 1000 e 1999 que divididos por
11 dão resto 5.*/

#include <stdio.h>
#define TAM 1999
int main()
{
    int n = 1000; // declara e atribui valor a variável n
    while (n <= TAM){// verifica se n é menor ou igual a constante
        if (n % 11 == 5){ // verifica se o numero "n" dividido por 11 é igual a 5
                printf("%d ", n); // imprime o o valor de n, caso  o if seja verdadeiro
            }
                n++; // increnta n
        }
    return 0;
}

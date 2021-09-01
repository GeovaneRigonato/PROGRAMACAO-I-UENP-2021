/*Fa ̧ca um programa que receba como entrada um valor inteiro “n”, em seguida, exiba uma
frase informando se o valor corresponde a um n ́umero “Positivo par”, “Positivo impar”,
“Negativo par”, “Negativo impar” ou “Nulo”.*/

#include <stdio.h>
int main()
{
    int n; // declara a variável

    scanf("%d", &n); // recebe os valores e atribui a variavel

    if(n % 2 == 0 && n > 0) { // verifica se é par e maior que 0
        printf("\nPositivo par\n");
    }
    else if(n % 2 == 0 && n < 0) { // verifica se é par e menor que 0
        printf("\nNegativo par\n");
    }
    else if(n % 2 != 0 && n > 0) { // verifica se é ímpar e maior que 0
        printf("\nPositivo ímpar\n");
    }
    else if(n % 2 != 0 && n < 0) { // verifica se é ímpar e menor que 0
        printf("\nNegativo ímpar\n");
    }
    else { // como todas as outras não satisfazem, n é nulo
        printf("\nNulo\n");
    }
    return 0;
}

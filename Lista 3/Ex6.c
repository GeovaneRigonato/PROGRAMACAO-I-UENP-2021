/*Fa ̧ca um programa que receba dois valores inteiros e calcule o resto da divis ̃ao do primeiro
pelo segundo valor. Se o resultado for 1 mostre a soma dos valores lidos mais o resto da
divis ̃ao; se for igual a 2 mostre se o primeiro e o segundo valor s ̃ao pares ou  ́ımpares; se for
igual a 3 multiplique a soma dos valores lidos pelo primeiro; se for igual a 4 divida a soma
dos n ́umeros lidos pelo segundo, se este for diferente de zero. Em qualquer outra situa ̧c ̃ao
mostre o quadrado dos n ́umeros lidos.*/

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,resto;
    printf("\nDigite os dois numeros separados por um espaço: ");
    scanf("%d%d",&a,&b);

    resto = a%b;

    if(resto == 1) {
        int soma = a + b + resto;
        printf("\nSoma dos valores com o resto: %d\n",soma);
    }
    else if(resto == 2) {
        if(a%2 == 0) {
            printf("\nO primeiro valor é par");
        }
        else {
            printf("\nO primeiro valor é impar");
        }
        if(b%2 == 0) {
            printf("\nO segundo valor é par");
        }
        else {
            printf("\nO segundo valor é impar");
        }
    }
    else if(resto == 3) {
        int multplicacao = (a+b) * a;
        printf("\nMultiplicacao: %d\n",multplicacao);
    }
    else if(resto == 4) {
        if(b != 0) {
            float divisao = (a+b)/b;
            printf("\nDivisao: %.2f\n",divisao);
        }
    }
    else  if(resto < 2 || resto > 4) {
        int quadrado = (a+b)*(a+b);
        printf("\nQuadrado dos numeros lidos: %d\n",quadrado);
    }

    return 0;
}

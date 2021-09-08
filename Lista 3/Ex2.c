/*Fa ̧ca um programa que receba como entrada trˆes n ́umeros positivos em ponto flutuante,
em seguida, mostre quantos deles est ̃ao acima da m ́edia aritm ́etica.*/

#include <stdio.h>

int main()
{
    float a,b,c,media;
    int cont =0;
    printf("\nDigite os 3 números separados por um espaço: ");
    scanf("%f%f%f",&a,&b,&c);

    media = a + b + c;

    if(a > media) {
        cont++;
    }
    if(b > media) {
        cont++;
    }

    if(c > media) {
        cont++;
    }

    printf("\nNumeros acima da media aritmetica: %d\n",cont);

    return 0;
}

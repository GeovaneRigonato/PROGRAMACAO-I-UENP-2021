/*Uma locadora de ve ́ıculos lan ̧cou uma promo ̧c ̃ao para este mˆes: pagando R$ 90 por di ́aria,
o cliente pode alugar um carro de passeio. Para cada di ́aria, o cliente recebe uma cota de
quilometragem de 100 km. Cada quilˆometro a mais custar ́a uma taxa extra de R$ 12.
Fa ̧ca um programa que receba como entrada a quantidade de dias e a quilometragem total
rodada por um cliente da locadora e exiba o valor total a ser pago.*/

#include <stdio.h>

int main()
{
    int dia;
    float kmTotal, valorPagar;
    printf("\nDigite a quantidade de dias e a quilometragem total, respectivamente: ");
    scanf("%d%f", &dia, &kmTotal);

    valorPagar =90*dia;
    if(kmTotal > 100) {
        valorPagar += (kmTotal - 100)*12;

        printf("\nValor a pagar: R$ %.2f\n", valorPagar);

        return 0;
    }
}

/*Fa ̧ca um programa que receba como entrada 3 n ́umeros inteiros e imprima um (e apenas
um) dos seguintes n ́umeros:
• 1 (Se todos os n ́umeros s ̃ao iguais)
• 2 (Se todos os n ́umeros s ̃ao diferentes)
• 3 (Se apenas dois n ́umeros s ̃ao iguais)*/

#include <stdio.h>
int main()
{
    int a,b,c; // declara as variáveis

    scanf("%d%d%d", &a, &b, &c);// recebe os valores e atribui as devidas variaveis

    if( a == b && b == c) { // verifica se todos dos numeros são iguais
        printf("\n1\n");

    }
    else if( (a == b && b != c) || (b == c && c != a) || (c == a && a != b) ) { // verifica pelo menos dois dos numeros são iguais
        printf("\n3\n");

    }
    else { // como as outras não satisfazem, então todos os 3 numeros são diferentes um do outro
        printf("\n2\n");
    }

    return 0;
}

/*Fa ̧ca um programa que receba como entrada 3 n ́umeros reais maiores que zero correspondendo
ao comprimento dos lados do triˆangulo, em seguida, classifique-o em:
1. equil ́atero (os trˆes lados de comprimentos iguais)
2. is ́osceles (dois lados de comprimentos iguais) ou
3. escaleno (os trˆes lados de comprimentos diferentes)*/

#include <stdio.h>

int main (){
float a,b,c; // declara as variaveis

scanf("%d%d%d", &a, &b, &c);// recebe os valores e atribui as devidas variaveis

if ((a && b && c) > 0){ //verifica se (a,b,c) > 0
    if( a == b && b == c){ // verifica se todos os lados são iguais
    printf("\nEquilatero\n");

    }else if( (a == b && b != c) || (b == c && c != a) || (c == a && a != b) ){ // verifica pelo menos dois dos lado são iguais
    printf("\nIsosceles\n");

    }else{ // como as outras não satisfazem, então todos os 3 lados são diferentes um do outro
    printf("\nEscaleno\n");
    }
}
return 0;
}

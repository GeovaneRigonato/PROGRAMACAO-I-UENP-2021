/*Fa ̧ca um programa para calcular as ra ́ızes da equa ̧c ̃ao de segundo grau. O programa recebe
como entrada os n ́umeros a, b, c, que correspondem aos coeficientes da equa ̧c ̃ao de segundo
grau (ax2 + bx + c = 0). Em seguida, o programa deve mostrar as ra ́ızes da equa ̧c ̃ao.
Caso as ra ́ızes n ̃ao existam, uma mensagem deve ser exibida (por exemplo, “N ̃ao existem
ra ́ızes reais”). Caso a equa ̧c ̃ao n ̃ao seja de segundo grau, uma mensagem tamb ́em deve ser
exibida (por exemplo, “N ̃ao  ́e uma equa ̧c ̃ao de segundo grau”).*/

#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,delta; // declara as variaveis inteiras
    float x1,x2; // declara as variaveis reais

    scanf("%d%d%d", &a,&b,&c); //recebe o valores e atribui as devidas variaveis

    delta = (pow(b, 2)- (4 * a * c)); //calcula o valor de delta
    x1 =(((-1)*b) + sqrt(delta)) / (2 * a); // calcula a primeira raiz
    x2 =(((-1)*b) - sqrt(delta)) / (2 * a); // calcula a segunda raiz

    if(delta < 0) { // verifica se delta não é negativo
        printf("\nNão existem raízes reais");

    }else if(a != 0 && b != 0 && c != 0) { // verifica se é uma função do segundo grau
    printf("\nAs raízes da função f(x) = %dx² + %dx + %d = 0 sao: \nx₁ = %.2f \nx₂ = %.2f", a,b,c,x1,x2);

    }else { // quando (a || b || c) = 0, não é uma função do segundo grau
    printf("\nNão é uma equação do segundo grau");
    }

    return 0;
}

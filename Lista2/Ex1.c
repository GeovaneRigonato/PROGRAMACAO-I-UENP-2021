#include <stdio.h>

int main()
{
    int a,b,c; // declara as variaveis
    scanf("%d%d%d", &a,&b,&c);// recebe os valores e atribui as devidas variaveis
    if(a > b && b > c) { // verifica se 'c' é o menor
        printf("%d", c);

    }else if(b> a && a > c) {// verifica se 'c' é o menor
        printf("%d", c);

    }else if(a > c && c > b) {// verifica se 'b' é o menor
        printf("%d",b);

    }else if(c > a && a > b) {// verifica se 'b'é o menor
        printf("%d", b);

    }else {//  como 'b' e 'c' não são os menores, 'a' é o menor número
        printf("%d", a);
    }
    return 0;
}

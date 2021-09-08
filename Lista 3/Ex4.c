/*Fa ̧ca um programa que receba como entrada 3 n ́umeros inteiros e e exiba esses n ́umeros em
ordem decrescente. Desafio: tente utilizar apenas 4 comandos if.*/

#include <stdio.h>

int main(){
int a,b,c,aux;

printf("\nDigite os 3 numeros separados por um espaço: ");
scanf("%d%d%d",&a,&b,&c);

if( a < c){
    aux = a;
    a = c;
    c = aux;;
}
if(a < b){
    aux = a;
    a = b;
    b = aux;
}
if(b < c){
    aux = b;
    b = c;
    c = aux;
}

printf("\nOrdem decrescente: [%d] [%d] [%d]\n",a,b,c);
return 0;
}

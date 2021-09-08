/*Fa ̧ca um programa que receba um n ́umero inteiro e determine se este n ́umero corresponde
ao dobro de outro n ́umero. Caso seja o dobro de um n ́umero, o programa deve mostrar que
n ́umero  ́e esse. Caso n ̃ao seja, uma mensagem deve ser exibida informando sobre isso.*/

#include <stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese_Brazil");

int a;

printf("\nDigite um numero: ");
scanf("%d",&a);

if(a%2 == 0){
    int metade = a/2;
    printf("\nO numero %d é o dobro de %d\n",a,metade);
}else{
    printf("\nO numero %d não é o dobro de nenhum numero\n");
}

return 0;
}

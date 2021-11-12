#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
double soma =0,n,numerador = 2,denominador = 1000;

printf("Digite a quantidade de termos da SOMA: ");
scanf("%lf",&n);

for(int i=0;i<n;i++){
    soma += (numerador / denominador);

    if(numerador == 2){
        numerador = -7;
        denominador-=50;
    }else if(numerador == -7){
        numerador = 2;
        denominador -= 150;
    }
}
printf("\nO valor da soma com %.0lf termo(s) é: %lf\n",n,soma);
system("pause");
return 0;
}

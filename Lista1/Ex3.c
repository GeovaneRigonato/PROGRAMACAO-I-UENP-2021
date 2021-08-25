#include <stdio.h>

int main(){
	float peso, altura;
	printf("Digite o peso: ");
	scanf("%f",&peso);
	printf("Digite a altura em centimetros: ");
	scanf("%f",&altura);

	float	imc = (peso)/(altura*altura); 
printf("O IMC desse indivíduo eh: %.2f", imc);
  return 0;
}
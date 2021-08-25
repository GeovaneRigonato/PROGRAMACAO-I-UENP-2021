#include <stdio.h>
#define Pi 3.1415
int main(){
float raio;
	printf("\nDigite o valor do Raio do Circulo: ");
	scanf("%f", &raio);

float perimetro = 2 * Pi * raio;

printf("\nO perímetro da circunferência é %.3f\n", perimetro);
  return 0;
}
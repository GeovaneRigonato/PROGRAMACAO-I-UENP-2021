#include <stdio.h>
#define Pi 3.1415
int main(){
float raio, altura;

printf("Digite o raio: ");
scanf("%f",&raio);

printf("Digite a altura: ");
scanf("%f",&altura);

float volume = (Pi * (raio * raio) * altura) / 3;

printf("Volume do CONE = %.2f", volume);
  return 0;
}
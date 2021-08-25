
#include <stdio.h>

int main(){
	float distanciaTotal, tempo;

	printf("Digite a distancia total(KM) percorrida pelo veiculo: ");
	scanf("%f", &distanciaTotal);

	printf("Digite o tempo(h) que o veiculo demorou para percorrer essa distancia: ");
	scanf("%f", &tempo);

	float velMedia = distanciaTotal / tempo ;
	printf("Velocidade media = %.2f", velMedia);
  return 0;
}

#include <stdio.h>

int main(){
float distanciaTotal,combustivelGasto;
		printf("Digite a distancia percorrida pelo veiculo: ");
		scanf("%f",&distanciaTotal);

		printf("Digite o quantidade de combustivel gasto pelo veiculo: ");
		scanf("%f", &combustivelGasto);

		float media = distanciaTotal / combustivelGasto;

		printf("Media = %.2f KM/L", media);
  return 0;
}
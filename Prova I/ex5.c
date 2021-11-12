#include <stdio.h>

int main() {
int qtdVeiculos,placa,horas;
float valorPagar,valorArrecadado;
printf("Quantidade de Veiculos estacionados: ");
scanf("%d",&qtdVeiculos);

for(int i=0;i<qtdVeiculos;i++){
printf("Placa: ");
scanf("%d",&placa);
printf("horas: ");
scanf("%d",&horas);

if(horas <=2){
valorPagar = 8;
}else valorPagar = 8 + (4 *(horas -2));
valorArrecadado +=valorPagar;
printf("Placa do Veiculo: %d\n",placa);
printf("Horas estacionado: %d\n",horas);
printf("Tarifa a ser paga: R$ %.2f\n",valorPagar);
}
printf("\nTotal arrecadado com o estacionamento: R$ %.2f\n",valorArrecadado);
  return 0;
}